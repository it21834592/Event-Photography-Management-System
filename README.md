# Event Photography Management System

This is an Event Photography Management System developed in C++. The system is designed to manage various aspects of event photography, including packages, appointments, payments, feedback, and user management.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Class Structure](#class-structure)
- [Setup](#setup)
- [Usage](#usage)
- [Contributors](#contributors)

## Introduction

This project aims to create a comprehensive management system for event photography services. It provides functionalities for administrators to manage packages, appointments, payments, and feedback. Users can register, book appointments, make payments, and provide feedback.

## Features

- Admin management
  - Add, delete, and update packages
  - Confirm appointments
  - Generate reports
  - Manage feedback

- User management
  - Register new users
  - Login and profile management
  - Book appointments
  - Make payments
  - Provide feedback

## Class Structure

### Admin
- **Private Attributes:** admin_id, userName, password, pay (Payment*), appointment (Appointment*), package (Package*)
- **Public Methods:** addPackage, deletePackage, updatePackage, confirmAppointment, generateReport, manageFeedback

### Feedback
- **Private Attributes:** feedback_id, feedback_client_id, feedback_title, feedback_description, regMemb (RegisterdUser*), admin (Admin*)
- **Public Methods:** addFeedback, deleteFeedback, editFeedback, searchFeedback, saveFeedback

### Payments
- **Private Attributes:** amount, CardNo, CardType, expDate, reguser (RegisteredUser*), admin (Admin*)
- **Public Methods:** autherizePayment

### Appointment
- **Private Attributes:** appointment_id, appointment_date, appointment_time, user_id, status
- **Public Methods:** placeAppointment, displayStatus

### RegisterdUser
- **Private Attributes:** name, email, address, dob, username, password, user_id, fd (Feedback*), pay (Payments*)
- **Public Methods:** setName, getName, setEmail, getEmail, setAddress, getAddress, setDob, getDob, setUsername, getUsername, setPassword, getPassword, login, updateProfile, verifyLogin, makePayements, givefeedbacks

### Package
- **Private Attributes:** packagePrice, packageType, packageDetails
- **Public Methods:** setPackagePrice, setPackageType, getPackageType, getPackagePrice, displayPackageDetails, displayPackagePrice

## Setup

1. Clone the repository:
- git clone https://github.com/yourusername/event-photography-management-system.git

2. Navigate to the project directory:
- cd event-photography-management-system

3. Compile the project:
- g++ -o main Main.cpp Admin.cpp Feedback.cpp Payments.cpp Appointment.cpp RegisterdUser.cpp Package.cpp

## Contributors
- IT21803048 Senanayaka S.M.K - Admin and Feedback modules
- IT21829642 Palihakkara T.U.D - Payments module
- IT21834592 Chethani A.V.S - Appointment module
- IT21833366 Wijerathna G.D.K - RegisteredUser module
- IT21838248 Perera P.A.H.V - Package module
