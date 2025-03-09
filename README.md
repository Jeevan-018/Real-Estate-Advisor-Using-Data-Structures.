# Real-Estate-Advisor-Using-Data-Structures.

## 📜 **FEATURES OF THE PROGRAM**

### 🏡 **Add Property (`addProperty`)**
- Allows users to input details for a new property:
  - **Name**
  - **Address**
  - **Price**
  - **Number of bedrooms**
- Newly added properties are stored in a **linked list**.

### 📋 **List All Properties (`listProperties`)**
- Displays all added properties with their details:
  - **Name**
  - **Address**
  - **Price**
  - **Number of bedrooms**
- Shows properties in **reverse order of entry** (last added first) due to the linked list structure.

### 🔍 **Search Property by Name (`searchByName`)**
- Finds and lists all properties matching a given name.
- **Case-sensitive search** (can be improved with case-insensitive search).

### 🏢 **Search Property by Address (`searchByAddress`)**
- Finds properties matching a specific address.
- Supports **multi-word addresses** using `scanf` with the format ` %[^
]`.

### 💲 **Search Property by Price Range (`searchByPriceRange`)**
- Allows users to set a **minimum and maximum price**.
- Lists all properties within the specified price range.

### 🛠 **Interactive Menu (`main`)**
- Provides an **intuitive menu-driven interface**.
- Keeps running until the user chooses to **exit**.

### 🧠 **Memory Management**
- Uses **dynamic memory allocation (`malloc`)** to handle properties.
- Implements a **linked list** for flexible property storage.

### 🎨 **User-Friendly Design**
- Includes **emoji indicators** for better visual feedback.
- Clear **success and error messages**.

### ⚡ **POTENTIAL IMPROVEMENTS**

- **Memory Deallocation:** Add a function to **free allocated memory on exit**.
- **Case-Insensitive Search:** Use **`strcasecmp`** for better usability.
- **Sorting Options:** Allow users to **sort properties** (e.g., by price or bedrooms).
- **Delete/Update Property:** Add functionality to **modify or remove properties**.
- **Persistent Storage:** Save and load properties from a **file** for data persistence.

### 🛠️ **CONCEPTS USED**

- **Structures:** To define **property attributes**.
- **Linked Lists:** For **dynamic, scalable property storage**.
- **Dynamic Memory Allocation:** To **allocate memory at runtime**.
- **String Handling:** Using **`scanf`, `strcmp`**, and related functions.
- **Loops & Conditional Statements:** For **interactive menu control**.

---

### Run this C-Program Using https://www.programiz.com/c-programming/online-compiler/
### So that it supports to display emoji that we have used ........


