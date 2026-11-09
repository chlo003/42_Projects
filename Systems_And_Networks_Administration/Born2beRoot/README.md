*This activity has been created as part of the 42 curriculum by chlminga.*

# Born2beRoot

## Table of Contents

- Description
- Project Description
- Instructions
- Technical Comparisons
- Ressources

## Description

Born2beRoot is a system administration project. Its goal is to introduce virtualization and the fundamentals of the Linux server administration.  
  
The project involves setting up a virtual machine running Debian and configuring a secure environment through user and persmission management, password policies, SSH, firewall rules, and system monitoring.  

## Project decription

### Operating System

The operating system chosen for this project is Debian.  
Reasons for choosing Debian:  
- A stable and widely used Linux distribution.  
- A package management system based on APT.  
- Extensive documentation and community support.  
- A suitable environment for learning system adminitration.  
  
The main trade-off is that Debian's stable repositories may provide older software versions than othr distributions.  

### Virtual Machine and Partitioning

The virtual machine is managed using VirtualBox.  
  
The disk uses encryptes partitions through LVM.  

### Security Configuration

- SSH: configured to use port 4242, with root login disabled.  
- Firewall: UFW configured to allow only the required inboundd port.  
- Password policy: password expiration, minimum password length, complexity, and password-change restrictions.  
- Sudo: restricted authentification attempts, logging, TTY enforcement, and command search path restrictions.  

### Monitoring Script

The monitoring.sh Bash script reports system information, including CPU and memory usage, disk usage, network information, active connections, and sudo command statistics.  

## Instructions

### Starting the Virtual Machine

1. Open VirtualBox.
2. Select the Born2beRoot virtual machine.
3. Start the virtual machine and log in with an authorized account.

### Connecting Through SSH

From a host that can reach the virtual machine, use:  
`ssh <user>@localhost -p 4242`  

## Technical Comparisons

### Debian vs Rocky Linux

Both Debian and Rocky Linux are Linux distributions suitable for server administration, but they belong to different software ecosystems.  

| Feature | Debian | Rocky Linux|
|:--- |:---:| ---:|
| Package manager |	APT	| DNF |
| Security framework commonly used | AppArmor | SELinux |
| Ecosystem | Debian-based distributions | Enterprise Linux ecosystem |
| Main advantage | Simplicity, extensive documentation and a large package repository | Compatibility with the Red Hat Enterprise Linux ecosystem |
| Main disadvantage | Stable releases may provide older software versions | Some administration tasks and security policies can require more initial configuration |  

**Advantages and disadvantages**  

- Debian: provides a stable, well-documented environment and straightforward package management. Its stable release model prioritizes reliability over providing the newest versions of every package.
- Rocky Linux: is designed for enterprise-oriented environments and aims for compatibility with Red Hat Enterprise Linux. Administrators may need to learn additional tools and security configuration conventions.  

**Why Debian was chosen**  

Debian is a suitable choice for Born2beRoot because it provides a stable environment for learning Linux administration, user management, service configuration and system security. Its APT package manager and extensive documentation also make it accessible to beginners.

### AppArmor vs SELinux

Both AppArmor and SELinux are Linux security modules that implement Mandatory Access Control (MAC). They restrict what applications can do, even when those applications run with certain privileges. This provides an additional layer of security beyond standard Linux permissions.  

| Feature | AppArmor | SELinux |
|:---|:---:|---:|
| Policy approach |	Primarily based on application paths | Primarily based on security labels and types |
| Configuration | Profiles associated with programs	| Policies defining permitted interactions between security contexts |
| Administration | Often easier to understand initially | Often requires more knowledge of contexts and policy rules |
| Common distribution association | Debian, Ubuntu | Rocky Linux, RHEL |
| Main advantage | Relatively straightforward application confinement | Fine-grained, label-based access control |
| Main disadvantage	| Path-based profiles can be less flexible for some complex policies | Troubleshooting labels and policy denials can be more complex |  

**Advantages and disadvantages**

 - AppArmor: uses profiles to define which resources an application can access. Its path-based approach often makes policies easier to read and maintain.
 - SELinux: uses security labels and policy rules to control access between processes, files and other system resources. It provides powerful, fine-grained control, but can require more effort to configure and troubleshoot.  

**Why AppArmor is relevant to this project**

 Debian uses AppArmor as its required security framework for Born2beRoot. AppArmor can restrict the actions of confined applications and help limit the impact of a compromised service. Its status should be checked to ensure that it is enabled and running.

### UFW vs Firewalld

UFW (Uncomplicated Firewall) and firewalld are tools for managing firewall rules on Linux. Both help control network traffic entering and leaving a system, but they differ in their configuration models.  

| Feature | UFW	| firewalld |
|:---|:---:|---:|
| Main purpose | Simplified firewall management	| Dynamic firewall management |
| Configuration model | Straightforward allow/deny rules | Zones, services, ports and rich rules |
| Network zones	| No equivalent zone-based model as its main interface	| Built around configurable trust zones |
| Rule changes | Simple command-line configuration | Supports runtime changes and permanent configuration |
| Main advantage | Easy to learn and suitable for simple server configurations | Flexible for servers with multiple interfaces and different trust levels |
| Main disadvantage | Less convenient for complex, zone-based network policies | More concepts and configuration options to learn |

### VirtualBox vs UTM

VirtualBox and UTM are virtualization applications that allow users to run operating systems inside virtual machines. Their main differences concern platform support, virtualization backends and the way they handle processor architectures.  

| Feature | VirtualBox | UTM |
|:---|:---:|---:|
| Main platform focus | Windows, Linux and macOS hosts, subject to supported configurations	| Primarily Apple platforms, including macOS and iOS |
| Technology | Hosted virtualization software | Uses QEMU and, on supported Apple systems, Apple's virtualization framework |
| Virtualization | Runs supported guest systems using hardware-assisted virtualization | Supports virtualization when host and guest architectures are compatible |
| Emulation	| Primarily designed for conventional virtualization workloads | Can emulate different processor architectures through QEMU |
| Main advantage | Broad host-platform support and a mature graphical interface	| Flexible emulation and integration with Apple hardware |
| Main disadvantage	| Compatibility and performance depend on the host platform and architecture | Some emulated configurations can be slower than native virtualization |  

VirtualBox provides virtual machines with virtual hardware, virtual disks and configurable resources. UTM combines QEMU-based functionality with Apple's virtualization technology where supported. When guest and host architectures differ, UTM may need to use emulation rather than hardware-assisted virtualization.

**Why VirtualBox was chosen**

VirtualBox is the virtualization software used for this Born2beRoot project. It provides the environment needed to install Debian, allocate virtual hardware resources, configure storage and networking, and operate the server without installing Debian directly on the host computer.
UTM is also a valid alternative under the project instructions, particularly for users who cannot use VirtualBox.  


## Ressources

### Official Documentation

- Debian documentation: debian.org
- AppArmor documentation: apparmor.net
- firewalld documentation: firewalld.org
- Virtualbox manual: virtualbox.org
- UTM documentation: docs.getutm.app

Most of the knowledge were understood thanks to the peer to peer.