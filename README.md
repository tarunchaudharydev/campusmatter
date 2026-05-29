![Status](https://img.shields.io/badge/Status-In%20Development-blue)
![Protocol](https://img.shields.io/badge/Protocol-Matter-green)
![Platform](https://img.shields.io/badge/Platform-ESP32-orange)
![Backend](https://img.shields.io/badge/Backend-Node.js-brightgreen)
![UI](https://img.shields.io/badge/UI%2FUX-Figma-purple)
![License](https://img.shields.io/badge/License-MIT-yellow)

# CampusMatter

> Matter-Based Smart Hostel Automation and Energy Optimization System

CampusMatter is an interoperable IoT-based smart hostel automation platform designed to optimize energy consumption, automate appliance management, and provide centralized monitoring for educational institutions and smart campuses.

The system leverages the Matter communication protocol, ESP32 smart nodes, occupancy sensing, and real-time analytics to create a scalable, secure, and low-cost smart infrastructure ecosystem.

---

# Table of Contents

- [Overview](#overview)
- [Problem Statement](#problem-statement)
- [Objectives](#objectives)
- [Proposed Solution](#proposed-solution)
- [System Architecture](#system-architecture)
- [Workflow](#workflow)
- [Core Features](#core-features)
- [Technology Stack](#technology-stack)
- [Hardware Components](#hardware-components)
- [Software Components](#software-components)
- [Repository Structure](#repository-structure)
- [Methodology](#methodology)
- [Implementation Plan](#implementation-plan)
- [Energy Optimization Logic](#energy-optimization-logic)
- [Security and Privacy](#security-and-privacy)
- [Scalability](#scalability)
- [UI/UX Design](#uiux-design)
- [Future Scope](#future-scope)
- [Expected Outcomes](#expected-outcomes)
- [Challenges](#challenges)
- [Research and Industry Relevance](#research-and-industry-relevance)
- [Contributors](#contributors)
- [License](#license)

---

# Overview

Educational institutions and hostels consume a significant amount of electricity due to inefficient appliance usage, lack of centralized monitoring, and absence of automation systems.

CampusMatter aims to solve this problem by building a smart IoT ecosystem capable of:

- Detecting room occupancy
- Automating electrical appliances
- Monitoring real-time energy consumption
- Providing centralized smart control
- Supporting interoperable smart devices using Matter

The project focuses on affordability, scalability, interoperability, and energy sustainability for modern campus environments.

---

# Problem Statement

Hostels and campus buildings frequently experience:

- Unnecessary energy wastage
- Appliances left ON in empty rooms
- Lack of centralized monitoring systems
- High operational costs
- Poor interoperability between smart devices
- Expensive commercial automation systems

Existing smart home ecosystems are generally designed for residential environments and are not optimized for educational institutions or low-cost scalable deployment.

---

# Objectives

The primary objectives of CampusMatter are:

1. Reduce unnecessary energy consumption in hostels and classrooms
2. Automate appliance control using occupancy detection
3. Build a low-cost interoperable smart infrastructure
4. Implement Matter-based device communication
5. Develop a centralized monitoring dashboard
6. Enable scalable deployment for campus-wide automation
7. Promote sustainable and energy-efficient smart campuses

---

# Proposed Solution

CampusMatter introduces a distributed IoT architecture where ESP32-based smart nodes communicate using Matter protocol and WiFi connectivity.

The system continuously monitors occupancy and environmental data using sensors. Based on real-time conditions and automation rules, appliances are intelligently controlled to reduce energy wastage.

The platform includes:

- Smart device nodes
- Matter communication layer
- Centralized gateway
- Web dashboard
- Real-time analytics engine

The proposed solution supports future integration with AI-driven optimization systems and renewable energy infrastructure.

---

# System Architecture

## High-Level Architecture

```text
+------------------------------------------------------+
|                  CampusMatter Dashboard              |
|        Web Interface / Analytics / Monitoring        |
+------------------------------------------------------+
                         |
                         |
                Local Gateway Server
               (Raspberry Pi / Node.js)
                         |
--------------------------------------------------------
|                Matter Communication Layer            |
--------------------------------------------------------
        |                  |                  |
        |                  |                  |
   ESP32 Node 1       ESP32 Node 2      ESP32 Node N
        |                  |                  |
   PIR Sensors        Smart Switches      Energy Meter
        |                  |                  |
   Lights / Fans      Hostel Appliances   Smart Devices
```

---

## Detailed System Architecture

![CampusMatter System Architecture](images/system-architecture.png)

### Figma Architecture Design

https://www.figma.com/board/R5EGnhXLoS8LCCX0KBMuGj/4-Layer-Architecture?node-id=0-1&t=ixFz7d1rTIAY2e8n-1

### Architecture Description

The CampusMatter system architecture follows a layered IoT infrastructure model designed for scalability, interoperability, and real-time smart automation.

The architecture integrates:

- ESP32-based smart nodes
- Occupancy and environmental sensors
- Matter communication protocol
- Gateway and processing infrastructure
- Automation and analytics engine
- Web and mobile monitoring dashboards

The system supports real-time data collection, secure communication, centralized monitoring, and intelligent energy optimization for smart hostel and campus environments.

---

### Architecture Layers

#### Dashboard Layer

Provides centralized monitoring, analytics visualization, appliance control, notifications, and smart automation management through web and mobile dashboards.

#### Gateway & Processing Layer

Handles device orchestration, automation logic, backend processing, real-time analytics, and data aggregation using Node.js and gateway infrastructure.

#### Matter Communication Layer

Enables secure and interoperable communication between distributed smart devices using Matter protocol, MQTT messaging, and WiFi connectivity.

#### Sensor & Device Layer

Includes ESP32 smart nodes, PIR occupancy sensors, smart relays, energy meters, smart plugs, and appliance automation modules responsible for data collection and environmental monitoring.

---

# Workflow

1. Sensors continuously monitor occupancy and appliance usage
2. ESP32 nodes process sensor inputs
3. Matter protocol enables interoperable communication
4. Gateway server aggregates and processes data
5. Dashboard displays analytics and device status
6. Automation engine triggers smart appliance actions
7. Energy usage data is stored for optimization analysis

---

# Core Features

## Smart Appliance Automation

- Automated ON/OFF control
- Smart scheduling
- Rule-based automation

## Occupancy Detection

- Motion-based room activity sensing
- Automatic power saving logic

## Matter-Based Interoperability

- Cross-platform smart device compatibility
- Vendor-independent architecture

## Energy Analytics

- Real-time energy monitoring
- Daily and monthly consumption analysis
- Energy-saving insights

## Centralized Monitoring

- Campus-wide dashboard
- Device health monitoring
- Remote management

## Local Network Support

- Reduced cloud dependency
- Faster response time
- Improved privacy

---

# Technology Stack

| Category               | Technology         |
| ---------------------- | ------------------ |
| Embedded Controller    | ESP32              |
| Communication Protocol | Matter             |
| Connectivity           | WiFi               |
| Messaging              | MQTT               |
| Frontend               | React.js           |
| Backend                | Node.js            |
| Database               | Firebase / MongoDB |
| UI Design              | Figma              |
| Diagram Design         | Draw.io            |

---

# Hardware Components

| Component    | Purpose                |
| ------------ | ---------------------- |
| ESP32        | Main microcontroller   |
| PIR Sensor   | Occupancy detection    |
| Relay Module | Appliance control      |
| Smart Plug   | Device automation      |
| Energy Meter | Consumption monitoring |
| Raspberry Pi | Local gateway server   |

---

# Software Components

- Embedded firmware for ESP32 nodes
- Matter communication stack
- Gateway management system
- Web dashboard frontend
- Real-time analytics engine
- Automation rule engine

---

# Repository Structure

```text
campusmatter/
│
├── README.md
│
├── docs/
│   ├── architecture/
│   ├── diagrams/
│   ├── methodology/
│
├── hardware/
│   ├── circuit-designs/
│   ├── components/
│
├── firmware/
│   ├── esp32-node/
│   ├── gateway/
│
├── dashboard/
│   ├── ui-design/
│   ├── frontend/
│
├── images/
│
├── future_scope/
│
└── LICENSE
```

---

# Methodology

## Phase 1: Research and Planning

- Study Matter protocol architecture
- Analyze existing smart automation systems
- Identify energy optimization challenges in hostels
- Define project objectives and system requirements

## Phase 2: System Architecture Design

- Design communication flow between devices
- Create block diagrams and architecture diagrams
- Finalize hardware and software components
- Plan interoperability using Matter protocol

## Phase 3: UI/UX Design

- Design dashboard interface using Figma
- Create device management screens
- Design analytics and monitoring views
- Build scalable and responsive user experience

## Phase 4: Prototype Development

- Configure ESP32 smart nodes
- Integrate occupancy sensors
- Develop appliance automation logic
- Establish communication using Matter protocol

## Phase 5: Integration

- Connect smart nodes to gateway server
- Integrate dashboard with backend services
- Implement real-time monitoring and analytics
- Enable centralized smart control

## Phase 6: Testing and Optimization

- Analyze automation performance
- Test occupancy-based energy optimization
- Evaluate scalability and reliability
- Optimize system responsiveness

---

# Implementation Plan

| Phase                 | Description                                    | Status      |
| --------------------- | ---------------------------------------------- | ----------- |
| Research and Analysis | Problem identification and protocol research   | Completed   |
| Architecture Design   | Communication and system architecture planning | In Progress |
| UI/UX Development     | Dashboard and application design               | Completed   |
| Hardware Prototyping  | ESP32 node and sensor integration              | Planned     |
| Backend and Dashboard | Monitoring and analytics development           | In Progress |
| Final Integration     | System-wide testing and deployment             | Planned     |

---

# Energy Optimization Logic

CampusMatter uses occupancy-based intelligent automation to reduce unnecessary energy consumption.

## Automation Flow

1. PIR sensors continuously detect room occupancy
2. ESP32 nodes process occupancy data
3. Gateway evaluates automation conditions
4. Smart appliances are controlled automatically
5. Energy usage is monitored and logged

## Example Scenario

- If no motion is detected for 15 minutes:
  - Turn OFF lights
  - Turn OFF fans
  - Activate power-saving mode

- If occupancy is detected:
  - Restore appliance state
  - Resume normal operation

This approach improves operational efficiency while maintaining user comfort.

---

# Security and Privacy

CampusMatter prioritizes secure communication and privacy-focused architecture.

## Security Features

- Matter-based secure communication
- Local network authentication
- Controlled device access
- Secure gateway communication

## Privacy Advantages

- Reduced cloud dependency
- Local data processing
- Faster response times
- Improved operational privacy

---

# Scalability

The proposed architecture supports scalable deployment across educational campuses.

## Scalability Features

- Multi-room integration
- Multi-floor deployment
- Campus-wide smart infrastructure
- Additional device onboarding
- Modular architecture expansion

The system design allows future upgrades without major infrastructure changes.

---

# UI/UX Design

The CampusMatter dashboard and mobile application interface have been designed using Figma to provide a modern, scalable, and user-friendly smart hostel management experience.

The UI focuses on:

- Real-time device monitoring
- Energy analytics visualization
- Smart appliance control
- Occupancy monitoring
- Automation management
- Centralized infrastructure monitoring

The design system follows a clean and responsive dashboard architecture suitable for both desktop and mobile platforms.

---

## Figma Design Prototype

### Web and Mobile Dashboard Design

https://www.figma.com/design/NoHSqHHYfD8jxVnwgTxcy3/Smart-Hostel-Energy-Optimization-System-using-Matter?node-id=0-1&t=HaEr8uKJNGCPJ0Zt-1

---

## Designed Screens

### Web Dashboard

- Energy monitoring dashboard
- Device management interface
- Occupancy analytics
- Appliance control panel
- System monitoring interface

### Mobile Dashboard

- Smart room controls
- Real-time device status
- Appliance automation controls
- Notifications and alerts
- Energy usage overview

---

## Dashboard Preview

![Dashboard UI](images/WebDashboard.png)

## Mobile Dashboard Preview

![Mobile UI](images/MobileDashboard.png)

---

## Design Objectives

The UI/UX system has been designed with the following goals:

- Clean and modern interface
- Easy navigation and accessibility
- Responsive cross-platform experience
- Real-time monitoring visualization
- Scalable smart infrastructure management
- User-friendly automation controls

---

## Design Tools Used

| Tool    | Purpose                        |
| ------- | ------------------------------ |
| Figma   | UI/UX Design                   |
| Draw.io | System Architecture Diagrams   |
| React   | Frontend Dashboard Development |

---

## Dashboard Features

- Real-time device monitoring
- Smart appliance controls
- Energy analytics visualization
- Occupancy status tracking
- Automation configuration panel

---

# Future Scope

Future enhancements of CampusMatter may include:

- AI-based predictive energy optimization
- Voice assistant integration
- Renewable energy management
- Solar-powered IoT nodes
- Smart attendance integration
- Predictive maintenance systems
- Edge AI occupancy prediction
- Full smart campus deployment

---

# Expected Outcomes

The expected outcomes of CampusMatter include:

- Reduction in electricity wastage
- Improved energy efficiency
- Centralized smart monitoring
- Affordable automation infrastructure
- Improved appliance management
- Sustainable campus operations

---

# Challenges

Potential challenges during implementation include:

- Matter protocol integration complexity
- Hardware interoperability testing
- Real-time communication synchronization
- Network reliability management
- Scalable infrastructure deployment

---

# Research and Industry Relevance

CampusMatter aligns with modern Industry 4.0 and smart infrastructure initiatives.

## Research Areas

- Embedded Systems
- Internet of Things (IoT)
- Smart Automation
- Energy Optimization
- Human-Centered Smart Infrastructure

## Industry Applications

- Educational Institutions
- Smart Buildings
- Hostels and Campuses
- Industrial Infrastructure
- Sustainable Smart Environments

---

# Research References

The development and architecture planning of CampusMatter are supported by official Matter protocol documentation and IoT interoperability research resources.

## Reference Documents

- Matter Protocol Documentation
- Silicon Labs IoT Development Resources
- Smart Infrastructure and Energy Optimization Research

---

## Research Focus Areas

The project research includes:

- Matter interoperability standards
- Smart home communication protocols
- Occupancy-based energy optimization
- Embedded IoT systems
- Distributed smart infrastructure
- Low-power smart automation

---

## Documentation Resources

Technical references, protocol specifications, and implementation resources related to the Matter ecosystem are available in:

```text
docs/research-papers/matter-protocol-documentation.pdf
```

---

# Contributors

## Maintainers & Contributors

| Name            | Role                          | Contact Information          | GitHub Profile    |
| :-------------- | :---------------------------- | :--------------------------- | :---------------- |
| **Tarun Kumar** | Project Lead & Core Developer | tarunchaudhary.dev@gmail.com | tarunchaudharydev |

---

# License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---
