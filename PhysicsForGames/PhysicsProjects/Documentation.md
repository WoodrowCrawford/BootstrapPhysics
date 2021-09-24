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
           A variable that is used to render 2d objects to the scene.

  - ### aie::Font* m_font:
            This variable is used to get the font type.

  - ### PhysicsScene* m_scene:
             A variable that is used to get the scene.
 

- ## Functions:
  - ## PhysicsGame():
              A function that creates the PhysicsGame Class.

  - ## virtual ~PhysicsGame():
              This function is a deconstructor for PhysicsGame().

  - ## virtual bool startup():
              This function is the main thing that the program 
              does when it starts up.

  - ## virtual void shutdown():
              This function runs whenever the program has ended.

  - ## virtual void update(*float deltaTime*):
              This is a function that constantly updates while the 
              program is running.

  - ## virtual void draw():
              This function draws the objects to the screen.

---


 #  Physics Object:
- ## Variables:
  - ### ShapeType m_shapeID:
              This variable is used to give the shapes a 
              shape type.


- ## Functions:
  - ### PhysicsObject(ShapeType shapeID) : m_shapeID(shapeID):
              This is a function that creates the shapes with
              the given shapeID.

  - ### virtual void fixedUpdate(glm::vec2  gravity, float timeStep):
               A virtual function that constantly updates. It is used
               for keeping track of the gravity and the speed
               of the program.

  - ### virtual void draw():
              A virtual function that is used to draw objects on the
              screen. 

  - ### virtual void resetPosition():
              A virtual function that resets the position of the
              objects.

  - ### ShapeType getShapeID():
              A function that returns the shapeID type.

---

 #  Physics Scene:

- ## Variables:
  - ### glm::vec2 m_gravity:
              A variable that is used to keep track of the 
              gravity in the program.

  - ### float m_timeStep:
              A variable that is used to keep track of the 
              time speed in the program.

  - ### std::set<PhysicsObject*> m_actors:
              A variable that is used to keep track of the
              actors in the program.


- ## Functions:
  - ### PhysicsScene():
              A funciton that creates the Physics scene with a given
              gravity and time step value.

  - ### ~PhysicsScene():
              A deconstructor for the PhysicsScene().

  - ### void addActor(PhysicsObject* actor):
              A function that adds an actor to the PhysicsScene() by
              using the PhysicsObject() class.

  - ### void removeActor(PhysicsObject* actor):
              A function that removes an actor from the PhysicsScene
              by using the PhysicsObject() class.

  - ### void update(float deltaTime):
              A funtion that updates constantly. It is used to
              update the actors and collision detection.

  - ### void draw():
              A function that is used to draw the objects on the 
              screen.

  - ### void setGravity(const glm::vec2 gravity):
              A function that sets the variable m_gravity to a
              given value.

  - ### glm::vec2 getGravity() const:
              A function that gets the variable m_gravity.

  - ### void setTimeStep(const float timeStep)
              A function that sets the variable m_timeStep to a given value.

  - ### float getTimeStep() const:
              A function that gets the variable m_timeStep.

  - ### static bool planeToPlane(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a plane
              and a plane.

  - ### static bool planeToSphere(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a plane
              and a sphere.

  - ### static bool planeToBox(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a plane
              and a box.

  - ### static bool sphereToPlane(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a sphere
              and a plane.

  - ### static bool sphereToSphere(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a sphere
              and a sphere.

  - ### static bool sphereToBox(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a sphere
              and a box.

  - ### static bool boxToPlane(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a box
              and a plane.

  - ### static bool boxToSphere(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a box
              and a sphere.

  - ### static bool boxToBox(PhysicsObject* object1, PhysicsObject* object2):
              A function that checks collision between a box
              and a box.


---

 # Plane:

- ## Variables:
  - ### glm::vec2 m_normal:
              A variable that is used to normal of a vector2.

  - ### float m_distance:
              A variable that is used to calculate the distance.

  - ### glm::vec4 m_color:
              A variable that is used to set the color of objects.


- ## Functions:
  - ### Plane(glm:vec2 normal, float distance, glm::vec4 color):
              This is a function that creates a plane at a given 
              distance and with a given color.


  - ### ~Plane():
              This function is a deconstructor for the Plane()
              function.

  - ### virtual void fixedUpdate(glm::vec2 gravity, float timeStep):
             This is a virtual function that constantly updates
             while the program is running. Used for things like 
             updating gravity values and the speed of the program.

  - ### virtual void draw():
              A virtual function that is used to draw objects
              to the scene.

  - ### void resolveCollision(RigidBody* other):
              A function that sets the elasticity of the rigid bodies
              that collided with each other.

  - ### glm::vec2 getNormal():
               A function that returns the variable m_normal.

  - ### float getDistance():
              A function that returns the variable m_distance.

  - ### glm::vec4 getColor():
              A function that returns the variable m_color.

---

 # Rigid Body:

- ## Variables:
  - ### glm::vec2 m_position:
             A variable used for calculating the position of the 
             rigid body.

  - ###  glm::vec2 m_velocity:
             A variable used for calculating the velocity of the 
             rigid body.

  - ### float m_mass:
             A variable used for calculating the mass of the
             rigid body.

  - ### float m_orientation:
             A variable used for calculating the orientaion of the
             rigid body.


- ## Functions:
  - ### RigidBody(ShapeType shapID, glm::vec2 position, glm::vec2 velocity, float orientation, float mass):
            A function that creates a rigid body with a given shape,
            position, velocity, orientation, and mass.

  - ### ~RigidBody():
            A function that is a deconstructor for RigidBody().

  - ### virtual void fixedUpdate(glm::vec2 gravity, float timeStep):
            A virtual function that constantly updates while the 
            program is running. Used to update things like
            gravity, collision detection, and the speed of
            the program.

  - ### void applyForce(glm::vec2 force):
            A function that applies a force with the variable
            m_force.

  - ### void applyForceToOther(RigidBody* other, glm::vec2 force):
            A function that applies a force to another rigid body
            with the variable m_force.

  - ### void resolveCollision(RigidBody* other):
            A function that sets the elasticity of the rigid bodies
              that collided with each other.

  - ###  glm::vec2 getPosition():
            A function that gets the variable m_position.

  - ### glm::vec2 getVelocity():
            A function that gets the variable m_velocity.

  - ### float getOrientation():
            A function that gets the variable m_orientation.

  - ### float getMass():
            A function that gets the variable m_mass.

---


 # Sphere:

- ## Variables:
  - ### float m_radius:
            A variable that is used for calculating the radius
            of the sphere.

  - ### glm::vec4 m_color:
            A variable that is used for changing the color
            of the sphere


- ## Functions:
  - ### Sphere(glm::vec2 position, glm::vec2 velocity, float mass, float radius, glm::vec4 color):
            A function that creates a sphere with a given position,
            velocity, mass, radius, and color.
   

  - ### ~Sphere():
           A function that is a deconstructor for the Sphere()
           function.

  - ### virtual void draw():
           A virtual function that is used to draw the objects
           onto the screen.

  - ### float getRadius():
           A function that gets the variable m_radius.

  - ### glm::vec4 getColor():
           A function that gets the variable m_color.

---