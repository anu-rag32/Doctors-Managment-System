-- 1. Departments Table
CREATE TABLE departments (
    dept_id NUMBER PRIMARY KEY,
    dept_name VARCHAR2(100) NOT NULL UNIQUE
);

-- 2. Doctors Table
CREATE TABLE doctors (
    doctor_id NUMBER PRIMARY KEY,
    first_name VARCHAR2(50) NOT NULL,
    last_name VARCHAR2(50) NOT NULL,
    specialization VARCHAR2(100),
    phone VARCHAR2(15),
    email VARCHAR2(100) UNIQUE,
    dept_id NUMBER,
    hire_date DATE DEFAULT SYSDATE,
    FOREIGN KEY (dept_id) REFERENCES departments(dept_id)
);

-- 3. Patients Table
CREATE TABLE patients (
    patient_id NUMBER PRIMARY KEY,
    first_name VARCHAR2(50) NOT NULL,
    last_name VARCHAR2(50) NOT NULL,
    gender VARCHAR2(10),
    dob DATE,
    phone VARCHAR2(15),
    email VARCHAR2(100) UNIQUE,
    address VARCHAR2(200)
);

-- 4. Appointments Table
CREATE TABLE appointments (
    appointment_id NUMBER PRIMARY KEY,
    doctor_id NUMBER NOT NULL,
    patient_id NUMBER NOT NULL,
    appointment_time TIMESTAMP NOT NULL,
    status VARCHAR2(50) DEFAULT 'Scheduled',
    remarks VARCHAR2(200),
    FOREIGN KEY (doctor_id) REFERENCES doctors(doctor_id),
    FOREIGN KEY (patient_id) REFERENCES patients(patient_id)
);

