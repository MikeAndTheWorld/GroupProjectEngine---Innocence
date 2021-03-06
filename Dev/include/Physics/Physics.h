#ifndef PHYSICS_H_
#define PHYSICS_H_

#include <gl\glew.h>
#include <GLFW\glfw3.h>


#include "glm\glm.hpp"
#include "glm\gtc\matrix_transform.hpp"
#include "glm\gtc\type_ptr.hpp"

#include "General\Scene.h"

#include "Physics\Components\BoxCollider.h"
#include "Physics\Components\RigidBody.h"
#include "Physics\Components\TransformComponent.h"



//The main game renderer for rendering all the RenderComponents within the scene.
class Physics {

private:

	//The current scene.
	Scene * m_CurrentScene_ = nullptr;

	//Vector of all game objects with a render component.
	std::vector<GameObject> m_sceneGameObjectsCollide_;
	std::vector<GameObject> m_sceneGameObjectsMove_;
	GLFWwindow * m_Window_;

	float gravity = 100.0f;
	float friction = 10.3f;

public:
	Physics() {

	}
	Physics(GLFWwindow * pWindow);

	void Render();


	void Stop(GameObject go);

	void CollisionDetection(float dt);


	void EulerMove(float dt);

	bool AABBAABBCollision(BoxCollider * boxC1, BoxCollider * boxC2);
	
	void ResolveCollision(GameObject& go,CollisionData * cd);

	void setScene(Scene * pScene);

	void update(float dt);

	void updateObjects();



};



#endif