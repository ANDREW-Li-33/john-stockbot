# John Stockbot - Primary Objectives
*Autonomous Basketball Rebounding & Training Assistant*

## Mission Statement
Develop an autonomous robot capable of intercepting basketballs in flight and returning them to players, initially as a static platform with future mobility capabilities.

## Core Objectives

### 1. Ball Detection & Tracking (Priority: Critical)
- **Objective**: Achieve robust real-time basketball detection and trajectory prediction
- **Success Metrics**:
  - Detection rate: >95% of shots from NBA 3-point line
  - Tracking latency: <50ms from detection to trajectory calculation
  - Trajectory prediction accuracy: ±20cm at intercept point
- **Key Requirements**:
  - Process ZED Mini depth + RGB data at minimum 30 FPS
  - Handle varying lighting conditions on indoor court
  - Track ball spin and account for Magnus effect in trajectory

### 2. Ball Interception (Priority: Critical)
- **Objective**: Successfully catch basketballs before ground contact
- **Success Metrics**:
  - Catching success rate: >90% for predicted intercepts within range
  - No damage to ball or safety hazards
  - Reliable ball containment post-catch
- **Key Requirements**:
  - Position accuracy: ±15cm at intercept point
  - Timing precision: ±100ms for intercept
  - Safe deceleration of ball momentum

### 3. Ball Return System (Priority: High)
- **Objective**: Return caught balls to player efficiently
- **Success Metrics**:
  - Launch consistency: ±1m accuracy at 10m distance
  - Return time: <3 seconds from catch to launch
  - Adjustable pass strength for various distances
- **Key Requirements**:
  - Flywheel speed control for variable pass distance (3-15m)
  - Reliable ball staging and feeding mechanism
  - Safety shutoff if player is too close

### 4. Platform Mobility (Priority: Medium - Phase 2)
- **Objective**: Enable autonomous navigation to optimal intercept positions
- **Success Metrics**:
  - Movement speed: >2 m/s
  - Positioning accuracy: ±10cm
  - Zero-turn capability for quick orientation changes
- **Key Requirements**:
  - Smooth omnidirectional movement via X-drive
  - Dynamic path planning to intercept point
  - Collision avoidance with court boundaries/obstacles

### 5. System Integration (Priority: High)
- **Objective**: Seamless coordination between all subsystems
- **Success Metrics**:
  - End-to-end latency: <200ms from detection to motion command
  - System reliability: >95% uptime during operation
  - Graceful failure handling
- **Key Requirements**:
  - Real-time communication between Jetson and Teensy
  - Synchronized control loops at 100Hz minimum
  - Robust error recovery mechanisms

## Development Principles

### Safety First
- Emergency stop capability at all times
- Soft-start for all motors
- Protected pinch points and moving parts
- Clear operational boundaries

### Iterative Development
- Start with static operation, validate core functionality
- Add mobility only after catching/passing proven
- Continuous testing on real court with real shots

### Modular Architecture
- Independent testing of each subsystem
- Clear interfaces between modules
- Version control for both hardware and software iterations

## Success Criteria for MVP (Month 1)
1. ✓ Detect and track basketball from 3-point line
2. ✓ Predict trajectory with <30cm error
3. ✓ Successfully catch 75% of straight shots
4. ✓ Return ball to fixed position via flywheel
5. ✓ Operate safely for 30-minute sessions

## Success Criteria for Version 1.0 (Month 2)
1. ✓ All MVP criteria at improved metrics
2. ✓ Mobile platform operational
3. ✓ Dynamic positioning for intercepts
4. ✓ Catch rate >90% within operational envelope
5. ✓ Variable distance passing with player tracking
6. ✓ 1-hour continuous operation capability