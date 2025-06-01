---

# 🎯 Step Academy Project — Full Stack Application

1. **Backend Web API (ASP.NET Core)**
2. **Dashboard (React + TypeScript)**
3. **Frontend Client (Angular)**

---

## 📘 Web API (Backend)

A modular ASP.NET Core backend providing APIs for course and user management.

### 🗂️ Key Files

| File         | Description                                 |
| ------------ | ------------------------------------------- |
| `.gitignore` | Specifies ignored files/directories for Git |

### 📁 Compass.Api

| File                           | Description                 |
| ------------------------------ | --------------------------- |
| `appsettings.json`             | Base configuration          |
| `appsettings.Development.json` | Development-specific config |
| `Compass.Api.csproj`           | Project file                |
| `Program.cs`                   | App entry point             |

#### 📂 Controllers

* `CategoryController.cs`
* `CourseController.cs`
* `UserController.cs`

#### ⚙️ Properties

* `launchSettings.json`: Development launch profiles

### 📁 Compass.Core

| File                   | Description                  |
| ---------------------- | ---------------------------- |
| `Compass.Core.csproj`  | Project file                 |
| `ServiceExtensions.cs` | Dependency injection helpers |

#### 📂 AutoMapper

* `AutoMapperCategoryAndProductProfile.cs`
* `AutoMapperCourseProfile.cs`
* `AutoMapperUserProfile.cs`

#### 📂 DTOs

Includes all data transfer objects like:

* `RegisterUserDto.cs`
* `CourseDto.cs`
* `ResetPasswordDto.cs`

#### 📂 Entities

* `AppUser.cs`
* `Course.cs`
* `Category.cs`
* `RefreshToken.cs`

#### 📂 Specifications

* Custom query logic for entities like:

  * `CategorySpecification.cs`
  * `CourseSpecification.cs`

#### 📂 Interfaces

* Abstractions like:

  * `ICourseService.cs`
  * `IJwtTokenService.cs`
  * `IRepository.cs`

#### 📂 Services

* Concrete implementations:

  * `CourseService.cs`
  * `CategoryService.cs`
  * `ServiceResponse.cs`

#### 📂 Validation

Organized by domain (Category, Course, Token, User). Example:

* `UserRegistrationValidation.cs`
* `AddCategoryValidation.cs`

### 📁 Compass.Infrastructure

| File                  | Description         |
| --------------------- | ------------------- |
| `CompassDbContext.cs` | Database context    |
| `SeedData.cs`         | Initial data seeder |

#### Interfaces & Services

* `IEmailSender.cs`, `ISystemClock.cs`
* `EmailSenderService.cs`, `SystemClockService.cs`

---

## 🧩 Dashboard (React + TypeScript)

A dynamic admin interface for managing users, courses, and categories.

### 📂 Project Root

| File            | Description               |
| --------------- | ------------------------- |
| `package.json`  | Metadata and dependencies |
| `tsconfig.json` | TypeScript config         |
| `README.md`     | Project overview          |
| `.gitignore`    | Git ignored files         |

### 📂 public

* `index.html`
* `favicon.ico`

### 📂 src

| File        | Description        |
| ----------- | ------------------ |
| `App.tsx`   | Main app component |
| `index.tsx` | Entry point        |

#### 📁 containers & layout

* `dashboardLayout/listItems`

#### 📁 hooks

* `useActions.ts`
* `useTypedSelector.ts`

#### 📁 pages

Grouped by features like:

* `addCategory`, `addCourse`, `signIn`, `signUp`
* `confirmEmail`, `resetPassword`, `updateCourse`
* `profile`, `categories`, `courses`, `users`

Each contains:

* `index.tsx` (page logic)
* `validation.ts` (form validation)

#### 📁 services

* `api-category-service.ts`
* `api-course-service.ts`
* `api-user-service.ts`

#### 📁 store (Redux)

Contains action creators, reducers, and type definitions:

* `categoryActions`, `courseActions`, `userActions`
* `categoryReducer`, `courseReducers`, `userReducers`

---

## 🌐 Frontend Client (Angular)

A user-facing client for interacting with the application.

### 📂 Project Root

| File              | Description              |
| ----------------- | ------------------------ |
| `angular.json`    | Angular config           |
| `tsconfig.*.json` | TypeScript configs       |
| `.editorconfig`   | Coding conventions       |
| `.vscode/`        | VS Code workspace config |
| `README.md`       | Project documentation    |

### 📁 src

| File          | Description            |
| ------------- | ---------------------- |
| `main.ts`     | Bootstraps Angular app |
| `index.html`  | Entry HTML             |
| `styles.scss` | Global styles          |

#### 📁 app

Includes routing and main components:

* `app.module.ts`, `app.component.*`
* Feature module: `courses/courses.component.*`

#### 📁 services

* `category.service.ts`
* `course.service.ts`

#### 📁 assets

* Placeholder image: `No_image_available.svg.png`
