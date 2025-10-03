# John Stockbot - General Timeline


## Project Duration: 9 Weeks

### Phase 1: Foundation (Weeks 1-3)
**Goal**: Establish core infrastructure and validate critical subsystems

- Model and design staging mechanism, feeding mechanism, and mobile base
- Finalize complete parts list and order remaining components:
  - Battery system
  - Staging mechanism parts
  - Feeding mechanism parts
  - Drivetrain components (motors, controllers, wheel mounts)
- Complete mechanical assembly of static platform
- Set up development environment (ROS2, CUDA, simulation)
- Validate sensor pipeline (ZED Mini → Jetson)
- Initial motor control testing (Teensy → motors)

**Key Milestone**: First successful ball detection and tracking demo

### Phase 2: Core Functionality (Weeks 4-5)
**Goal**: Achieve basic catch and return capability

- Implement trajectory prediction algorithms
- Develop staging mechanism control software
- Tune flywheel launching
- Program ball capture/containment system
- Design ROS2 nodes for mobility (architecture preparation)
- Start basic drivetrain firmware development on Teensy
- Integration of vision → control pipeline

**Key Milestone**: First successful catch and return of stationary-launched ball

### Phase 3: Mobility Integration (Weeks 6-7)
**Goal**: Add mobile platform capabilities

- Week 6 - Physical Assembly:
  - Mount omni wheels to base
  - Install drivetrain motors and controllers
  - Connect motor controllers to Teensy
  - Attach static platform to mobile base
- Week 7 - Software Implementation:
  - Implement X-drive kinematics
  - Test basic movement commands
  - Develop path planning to intercept points
  - Create court awareness and boundary detection
  - Test mobile interception strategies

**Key Milestone**: First successful mobile intercept

### Phase 4: System Refinement (Weeks 8-9)
**Goal**: Polish, optimize performance, and prepare for extended use

- Full system integration testing
- Performance optimization to reach target metrics
- Implement adaptive trajectory prediction
- Add player detection and tracking
- Refine launch accuracy and power control
- Safety validation and failure mode testing
- Documentation and code cleanup
- Demo video preparation

**Key Milestone**: 90% catch rate achieved, 1-hour autonomous operation demo


## Success Checkpoints

| Week | Checkpoint | Go/No-Go Criteria |
|------|------------|-------------------|
| 3 | Vision system operational | Track ball at 30 FPS |
| 5 | Static catch demonstrated | >50% success rate |
| 7 | Mobile platform operational | Basic movement working |
| 9 | Full system operational | >90% catch rate, mobile intercepts |