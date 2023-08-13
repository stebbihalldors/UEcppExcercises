# UEcppExcercises

## Exercise 1 - The Rotator
- Make an Actor class and drag it into the scene.
- Make an ActorComponent class—this is what will rotate the Actor you just made.
- Add the ActorComponent to the Actor.
- Make a public float value in the ActorComponent and make it editable. This will be the speed of rotation.
- Add rotation based on the speed of rotation, in the TickComponent method override in the ActorComponet.
- Watch the Actor rotate!

## Exercise 2 - The Spawner
- Create an AActor class that will be your spawning actor—use a cube or other primitive component to make it visible.
- Make a manager object. Classes that can be used for this include AInfo, UWorldSubsystem, and AGameMode, with varied requirements between the three.
- Create a publicly accessible method in the manager object called “Spawn” that takes a FVector as a parameter.
- In the manager object, create a private TArray that stores pointers to your spawned object class.
- Create an AActor class that will be your spawn point object.
- In the spawn point, add a public floating point variable that is the radius of the spawning area.
- In the spawn point, add a public integer variable that is the number of spawns that should happen.
- Use DrawDebugHelpers to draw a debug circle or sphere on Tick, to visualize where the spawning area is.
- In OnBeginPlay, trigger the manager object’s Spawn method at random locations inside the radius the specified number of times.
- In the Spawn method in the manager, use SpawnActor or other gameplay function to create a new actor and add it to the TArray of actors each time the Spawn method is called,
  then move the newly spawned actor to the supplied Location.

## Exercise 3 - The Interactor

- Create an ActorComponent that will collect potential interactive objects. Add this to your player.
- Create an Interface that has a single method that allows you to interact with any Actor that implements it.
- Create an AActor that implements the Interface and add it to the world. (Or add the interface to the spawned AActor from the previous exercise.)
- Make the ActorComponent collect possible targets in its TickComponent method. Possible alternatives are using an Overlap (such as GetWorld()->OverlapMultiByChannel) or getting the TArray of actors from the manager object in the previous exercise. You could also use a LineTrace from the player’s camera. Consider the benefits of each method before you implement one. For example, can an AI make use of the LineTrace variant?
- Pick the most relevant of the collected possible targets and safely call the interface on that target.
- Implement the same interface on a Blueprint actor.

