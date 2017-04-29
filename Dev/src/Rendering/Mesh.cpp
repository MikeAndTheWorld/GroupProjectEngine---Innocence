#include "Rendering\Mesh.h"

Mesh::Mesh() {

}


//Create using a factory class.
Mesh::Mesh(RawMesh rMesh, glm::vec4 m_Colour_) {
	//Give the Mesh class its raw data.
	rawMesh = rMesh;
	
}

Mesh::Mesh(RawMesh rMesh, Material pMat) {
	rawMesh = rMesh;
	m_Material_ = pMat;
}

