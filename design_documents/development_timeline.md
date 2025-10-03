# John Stockbot - General Timeline
*Autonomous Basketball Rebounding & Training Assistant*

## Project Duration: 8 Weeks (2 Months)

### Phase 1: Foundation (Weeks 1-2)
**Goal**: Establish core infrastructure and validate critical subsystems

- Complete mechanical assembly of static platform
- Set up development environment (ROS2, CUDA, simulation)
- Validate sensor pipeline (ZED Mini → Jetson)
- Initial motor control testing (Teensy → motors)
- Create basic safety systems

**Key Milestone**: First successful ball detection and tracking demo

### Phase 2: Core Functionality (Weeks 3-4)
**Goal**: Achieve basic catch and return capability

- Implement trajectory prediction algorithms
- Develop staging mechanism control
- Tune flywheel launch parameters
- Create ball capture/containment system
- Integration of vision → control pipeline

**Key Milestone**: First successful catch and return of stationary-launched ball

### Phase 3: Performance Optimization (Weeks 5-6)
**Goal**: Reach target performance metrics for static operation

- Optimize catching success rate through testing
- Implement adaptive trajectory prediction
- Add player detection and tracking
- Refine launch accuracy and power control
- Stress test all subsystems

**Key Milestone**: 90% catch rate from 3-point line, accurate returns

### Phase 4: Mobility Integration (Week 7)
**Goal**: Add mobile platform capabilities

- Integrate omni-wheel drivetrain control
- Implement path planning to intercept points
- Develop position control and odometry
- Create court awareness and boundary detection
- Test mobile interception strategies

**Key Milestone**: First successful mobile intercept

### Phase 5: System Refinement (Week 8)
**Goal**: Polish, document, and prepare for extended use

- Full system integration testing
- Performance tuning and optimization
- Safety validation and failure mode testing
- Documentation and code cleanup
- Demo video preparation

**Key Milestone**: 1-hour autonomous operation demo

## Parallel Development Tracks

### Track A: Vision & Intelligence (Continuous)
- Ball detection/tracking
- Trajectory prediction
- Player tracking
- Court mapping

### Track B: Mechanical & Control (Continuous)
- Motor control firmware
- Staging mechanism
- Flywheel control
- Drivetrain integration

### Track C: Software Architecture (Continuous)
- ROS2 node development
- Inter-process communication
- State machine design
- Error handling

## Risk Mitigation Schedule

### Weekly Testing Sessions
- **Monday**: Component testing
- **Wednesday**: Integration testing
- **Friday**: Full system testing on court

### Critical Path Items (Must Not Slip)
1. Week 1: Vision pipeline operational
2. Week 2: Motor control validated
3. Week 3: First catch attempt
4. Week 4: Reliable static operation
5. Week 6: Performance targets met

## Resource Allocation

### Week 1-2: 70% Hardware, 30% Software
- Focus on mechanical completion
- Basic software infrastructure

### Week 3-4: 30% Hardware, 70% Software
- Software-heavy algorithm development
- Hardware debugging as needed

### Week 5-6: 20% Hardware, 80% Software
- Primarily software optimization
- Minor mechanical adjustments

### Week 7-8: 40% Hardware, 60% Software
- Balance between mobility hardware and integration software

## Success Checkpoints

| Week | Checkpoint | Go/No-Go Criteria |
|------|------------|-------------------|
| 2 | Vision system operational | Track ball at 30 FPS |
| 4 | Static catch demonstrated | >50% success rate |
| 6 | Performance targets met | >90% catch rate |
| 8 | Full system operational | Mobile intercepts working |