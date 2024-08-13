# Custom HTML Element Creator

This project allows users to dynamically create and customize HTML elements through a console interface. The created elements are then output to an HTML file, which can be immediately viewed in a browser.

## Features

- **Dynamic Element Creation:** Users can specify the type of HTML element, its inner content, and custom inline styles.
- **Real-Time HTML Output:** The generated HTML is saved to an `index.html` file, which is automatically opened in the default web browser.
- **Text Input Flexibility:** Multi-line text input is supported, allowing for more complex inner content within the elements.
- **File Output:** A separate text file, `guide.txt`, is also created with additional output data.

## How It Works

1. **Start the Program:** Run the program in your preferred C++ development environment.
2. **Create Elements:**
   - You will be prompted to create an HTML element.
   - Enter the desired HTML tag (e.g., `div`, `p`, `h1`).
   - Provide the inner text or content for the element.
   - Set custom inline styles (e.g., `color: red; font-size: 20px;`).
3. **View the Output:**
   - The created elements are written to an `index.html` file.
   - The HTML file is automatically opened in your default web browser for immediate viewing.
   - Additionally, a `guide.txt` file is generated with supplementary information.

## Example

Here’s an example of how to use the program:

```cpp
Create a new element? (YES/NO): YES
Which element would you like to create?: p
Create Inner Element/ Inner Text!: This is a paragraph.
Set your inline styles for the parent/main element.: color: blue; text-align: center;
Element Created!

## This input would create the following HTML:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <p style="color: blue; text-align: center;">This is a paragraph.</p>
</body>
</html>

## Dependencies

- **fmt Library:** Used for formatting strings, numbers, and other data types in the program.
- **Windows API:** Utilized to open the generated HTML file in the default web browser.

## Setup

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/custom-html-element-creator.git
    ```

2. Compile the code using a C++ compiler with support for the fmt library.

3. Run the executable to start creating your custom HTML elements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
