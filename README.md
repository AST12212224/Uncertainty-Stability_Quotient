# **High-Precision Calculation of $` \Phi_{n,a,b}(x,y) `$ using GMP**  

## **📌 Overview**  
This C++ program computes the function  
**$$\Phi_{n,a,b}(x,y) =\frac{x^{n\pm a}\pm y^{n\pm a}}{x^{n\pm b}\pm y^{n\pm b}}$$**


using the **GMP (GNU Multiple Precision) library** to ensure high-precision arithmetic. It is designed for large numbers and avoids floating-point precision loss.  

For a detailed explanation of the equation and its insights, **check out my blog on Medium**:  
🔗 **[Read the Full Article Here](https://medium.com/@aadeshtikhe24/uncertainty-stability-quotient-usq-a-power-ratio-capturing-the-transition-from-instability-to-aa4f7d7b62ec)**  

---

## **🚀 Features**  
✅ **Supports Very Large Numbers** with GMP's `mpf_class` for arbitrary precision.  
✅ **Efficient Computation** using optimized exponentiation.  
✅ **Avoids Overflow & Rounding Errors** common with `double` or `long double`.  
✅ **Prevents Division by Zero Errors** by checking the denominator before computation.  

---

## **📥 Installation & Dependencies**  
### **🔹 Installing GMP Library (for macOS/Linux)**  
If GMP is not installed, install it using **Homebrew (macOS)** or **apt (Linux)**:  

#### **For macOS (Apple Silicon - M1/M2)**
```sh
brew install gmp
```
#### **For Ubuntu/Debian**
```sh
sudo apt update && sudo apt install libgmp-dev libgmpxx4ldbl
```

#### **For Arch Linux**
```sh
sudo pacman -S gmp
```

#### **For Windows**
Use **MSYS2** and install GMP via:
```sh
pacman -S mingw-w64-x86_64-gmp
```

---

## **📝 Usage**  
### **🔹 Compilation**
Use **g++** with proper linking to GMP:  
```sh
g++ USQ.cpp -o USQ -I/opt/homebrew/include -L/opt/homebrew/lib -lgmpxx -lgmp
```
If GMP is installed globally, just run:
```sh
g++ USQ.cpp -o USQ -lgmpxx -lgmp
```

### **🔹 Running the Program**
```sh
./USQ
```

---

## **🐛 Troubleshooting**  
### **Issue: Linker Error on Apple M1/M2 (ARM64)**
If you get an error like:  
```
Undefined symbols for architecture arm64
```
Try reinstalling GMP for ARM64:  
```sh
brew uninstall gmp
brew install gmp
```
Then compile with:  
```sh
g++ USQ.cpp -o USQ -I/opt/homebrew/include -L/opt/homebrew/lib -lgmpxx -lgmp
```

### **Issue: GMP Not Found (Linux)**
Ensure the GMP library is installed:  
```sh
sudo apt install libgmp-dev
``` 

---

## **📬 Contact & Contributions**
🐛 **Found a bug?** Feel free to submit an **issue** or a **pull request**!  
📧 **Have questions?** Reach out to me at [aadeshtikhe24@gmail.com]  
