# *Documentation*

##   Project name: Physics Projects

 - - -

 ### Project Files:

- #### Physics Game
        The main file in the project that knows about the other files.
        Edit this file to change how the game looks and place shapes.
- #### Physics Object
        This file gives the shapes a shape type. It does not actually
        "create" the values for the shape.
- #### Physics Scene
        This file is used to create the scene for the game. It also sets
        up collision dectection for the shapes.
- #### Plane
         This file creates the "plane" shape type. It has its own
         values that make it a plane.
- #### Rigid Body
          This file gives the shapes given a mass and helps them apply
          force to each other.
- #### Sphere
           This file creates the "sphere" shape type. It has its own 
           values that make it a sphere.
---

# Variables and Functions

 #  Physics Game:

- ## Variables:
  - ### aie::Renderer2D* m_renderer:
           insert description here

  - ### aie::Font* m_font:
            insert description here

  - ### PhysicsScene* m_scene:
             insert description here
 

- ## Functions:
  - ## PhysicsGame():
              insert description here

  - ## virtual ~PhysicsGame():
              insert description here

  - ## virtual bool startup():
              insert description here

  - ## virtual void shutdown():
              insert description here

  - ## virtual void update(*float deltaTime*):
              insert description here

  - ## virtual void draw():
              insert description here

---


 #  Physics Object:
- ## Variables:
  - ### ShapeType m_shapeID:
              insert Description here


- ## Functions:
  - ### PhysicsObject(ShapeType shapeID) : m_shapeID(shapeID):
              insert description here

  - ### virtual void fixedUpdate(glm::vec2  gravity, float timeStep):
              insert here

  - ### virtual void draw():
              insert here

  - ### virtual void resetPosition():
              insert here

  - ### ShapeType getShapeID():
              insert here

---

 #  Physics Scene:

- ## Variables:
  - ### glm::vec2 m_gravity:
              insert here

  - ### float m_timeStep:
              insert here

  - ### std::set<PhysicsObject*> m_actors:
              insert here


- ## Functions:
  - ### PhysicsScene():
              insert here

  - ### ~PhysicsScene():
              insert here

  - ### void addActor(PhysicsObject* actor):
              insert here

  - ### void removeActor(PhysicsObject* actor):
              insert here

  - ### void update(float deltaTime):
              insert here

  - ### void draw():
              insert here

  - ### void setGravity(const glm::vec2 gravity):
              insert here

  - ### glm::vec2 getGravity() const:
              insert here

  - ### void setTimeStep(const float timeStep)
              insert here

  - ### float getTimeStep() const:
              insert here

  - ### static bool planeToPlane(PhysicsObject* object1, PhysicsObject* object2):
              insert here

  - ### static bool planeToSphere(PhysicsObject* object1, PhysicsObject* object2):
              insert here

  - ### static bool planeToBox(PhysicsObject* object1, PhysicsObject* object2):
              insert here

  - ### static bool sphereToPlane(PhysicsObject* object1, PhysicsObject* object2):
              insert here

  - ### static bool sphereToSphere(PhysicsObject* object1, PhysicsObject* object2):
              insert here

  - ### static bool sphereToBox(PhysicsObject* object1, PhysicsObject* object2):
              insert here

  - ### static bool boxToPlane(PhysicsObject* object1, PhysicsObject* object2):
              insert here

  - ### static bool boxToSphere(PhysicsObject* object1, PhysicsObject* object2):
              insert here

  - ### static bool boxToBox(PhysicsObject* object1, PhysicsObject* object2):
              insert here


---

 # Plane:

- ## Variables:
  - ### glm::vec2 m_normal:
              insert here

  - ### float m_distance:
              insert here

  - ### glm::vec4 m_color:
              insert here


- ## Functions:
  - ### Plane(glm:vec2 normal, float distance, glm::vec4 color):
              insert here


  - ### ~Plane():
             insert here

  - ### virtual void fixedUpdate(glm::vec2 gravity, float timeStep):
             insert here

  - ### virtual void draw():
             insert here

  - ### void resolveCollision(RigidBody* other):
             insert here

  - ### glm::vec2 getNormal():
             insert here

  - ### float getDistance():
             insert here 

  - ### glm::vec4 getColor():
             insert here

---

 # Plane:

- ## Variables:
  - ### glm::vec2 m_position:
             insert here

  - ###  glm::vec2 m_velocity:
             insert here

  - ### float m_mass:
             insert here

  - ### float m_orientation:
             insert here


- ## Functions:
  - ### RigidBody(ShapeType shapID, glm::vec2 position, glm::vec2 velcity, float orientation, float mass):
            insert here

  - ### ~RigidBody():
            insert here

  - ### virtual void fixedUpdate(glm::vec2 gravity, float timeStep):
            insert here

  - ### void applyForce(glm::vec2 force):
            insert here

  - ### void applyForceToOther(RigidBody* other, glm::vec2 force):
            insert here

  - ### void resolveCollision(RigidBody* other):
            insert here

  - ###  glm::vec2 getPosition():
            insert here

  - ### glm::vec2 getVelocity():
            insert here

  - ### float getOrientation():
            insert here

  - ### float getMass():
            insert here

---


 # Sphere:

- ## Variables:
  - ### float m_radius:
            insert here 

  - ### glm::vec4 m_color:
            insert here 


- ## Functions:
  - ### Sphere(glm::vec2 position, glm::vec2 velocity, float mass, float radius, glm::vec4 color):
           insert here

  - ### ~Sphere():
           insert here 

  - ### virtual void draw():
           insert here

  - ### float getRadius():
           insert here

  - ### glm::vec4 getColor():
           insert here