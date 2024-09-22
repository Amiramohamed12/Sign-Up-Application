# User Sign-Up Application

## Overview

This application allows users to add records and recall them via an ID. It serves as a practical exercise in using containers, loops, branching, and handling user input.

## Features

- **Add Record**: Users can input their name and age to create a new record.
- **Fetch Record**: Users can retrieve their record by entering their unique user ID.

## Implementation Steps

1. **Include Headers**: Start by including the necessary headers that the application will need.
   
2. **Define the Record Class**:
   - Create a class to represent a person, which includes a name and an age.
   - Use a vector to store these records for flexibility.

3. **Add and Fetch Functions**:
   - **AddRecord**: This function accepts a name and age as parameters, creates a record object, and adds it to the records vector.
   - **FetchRecord**: This function accepts a user ID and returns the corresponding record.

4. **Main Function**:
   - Implement the main application loop.
   - Provide options to the user: Add Record, Fetch Record, and Quit.
   - Capture user input and handle it with a switch statement:
     - For adding a record, prompt for the user’s name and age and call `AddRecord`.
     - For fetching a record, ask for the user ID and call `FetchRecord` to display the result.

## Example

- To add a record:
    ```
    Add User. Please enter user name and age:
    Name: John Doe
    Age: 30
    ```
  
- To fetch a record:
    ```
    Please enter user ID:
    User ID: 1
    User Name: John Doe
    User Age: 30
    ```

