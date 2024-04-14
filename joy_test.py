import pygame
import sys

# Initialize Pygame
pygame.init()

# Initialize the joystick
pygame.joystick.init()

# Check if any joysticks are connected
if pygame.joystick.get_count() == 0:
    print("No joystick connected.")
    pygame.quit()
    sys.exit()

# Get the first joystick
joystick = pygame.joystick.Joystick(0)
joystick.init()

# Main loop
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        elif event.type == pygame.JOYAXISMOTION:
            # Joystick axis motion event
            axis = event.axis
            value = event.value
            print("Axis:", axis, "Value:", value)
        elif event.type == pygame.JOYBALLMOTION:
            # Joystick ball motion event
            ball = event.ball
            value = event.rel
            print("Ball:", ball, "Value:", value)
        elif event.type == pygame.JOYBUTTONDOWN:
            # Joystick button down event
            button = event.button
            print("Button", button, "down")
        elif event.type == pygame.JOYBUTTONUP:
            # Joystick button up event
            button = event.button
            print("Button", button, "up")
        elif event.type == pygame.JOYHATMOTION:
            # Joystick hat motion event
            hat = event.hat
            value = event.value
            print("Hat:", hat, "Value:", value)
