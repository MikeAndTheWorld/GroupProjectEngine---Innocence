require("TriggerStatus")
require("CollectibleManager")

Collectible = 
{
	Start = function()
		
	end,
	
	Update = function(dt)
		collider = gameObject:getComponent("BoxCollider")
		print(collider.triggerStatus)

		if (collider.triggerStatus == Trigger.ENTER) then
			print "HELLO"
			-- Add to collectible global
			CollectibleManager.addCounter()
			-- Collision, Pick up object (Stop drawing)
			gameObject:getComponent("RenderComponent"):toggleDrawing(false)
			gameObject.transform.position = Vec3(0, -100, 0)
		end
	end,
	
	LateUpdate = function(dt)
		
	end,
	
	Destroy = function()
		
	end
}