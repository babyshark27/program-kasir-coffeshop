# COFFEE SHOP CASHIER PROGRAM
  The program above is a simple implementation of a Coffee Shop using the C++ 
  programming language. This program allows users to select the coffee menu, 
  coffee size, and payment method, as well as calculate the total price and 
  refund.

  This program uses several variables such as menu, harga, and ukuran which is an 
  array to store the menu list, price, and size of coffee. hitungTotalHarga 
  function is used to calculate the total price of an order based on the quantity 
  and price per item.

  After the user selects the menu, size, and enters the order quantity, the 
  program will calculate the total price based on that input. Next, the user will 
  be asked to select a payment method and enter the amount to be paid. If the 
  amount of payment money is sufficient, the program will calculate the change.

  Finally, the program will display a receipt that includes order details, total 
  price, amount paid, and change.

  This program can be compiled and run using C++ compilers such as GCC, Clang and 
  others

  #KEYWORDS
  
  Here are some concept keywords used in the above program:
   - Variables: used to store data such as `jumlah`, `pilihan`, 
    `metodePembayaran`,`pembayaran`, `totalHarga` and `kembalian`.

   - Array: used to store menu lists (`menu`), prices (`harga`), sizes 
    (`ukuran`), and size factors (`faktorUkuran`).
   - Looping: using a `for` loop to iterate through the elements in an array.
   - Branching: using `if` statements to perform condition checks, such as 
     validating input options and sizes.
   - Function: there is a function `calculateTotalPrice` which is used to 
     calculate the total price of the order.
   - Input/Output: uses the `cin` function to receive input from the user and the 
    `cout` function to output to the screen.
   - Text Manipulation: use the `setw`, `left` and `right` of `<iomanip>` to set 
     the display width and placement of the text in the table.
   - String: uses the `string` data type to store text, such as menu names and 
     sizes.
   - Constants: takes price and size factor as fixed values (`const`).
   - Namespace: use `using namespace std` to use functions and objects in the 
    `std` namespace.

#OUTPUT

1.  Here is the first display when the program is run
   
   ![Screenshot (236)](https://github.com/babyshark27/program-kasir-coffeshop/assets/136563048/7df654b8-9c74-4a20-ac69-862b08564fcc)


    You will be given the option to select an existing menu

2.  For example, the menu you choose is number 2, then you will again be given 
    the option of 3 menu size options
    
    ![Screenshot (237)](https://github.com/babyshark27/program-kasir-coffeshop/assets/136563048/41239b22-94eb-4d74-9177-20608245bb25)

3. Next you will be given an order to enter the number of orders you want
   
   ![Screenshot (238)](https://github.com/babyshark27/program-kasir-coffeshop/assets/136563048/763a9109-27a6-46e9-9b63-8c849d347d31)

4. For example, if you order 5 copies, the total price you have to pay and 2
   
   ![Screenshot (239)](https://github.com/babyshark27/program-kasir-coffeshop/assets/136563048/6b77358a-1b20-4eaf-a2d1-b17fd235fd9f)

5. Finally you can make a payment and a payment receipt will be displayed
    
   ![Screenshot (240)](https://github.com/babyshark27/program-kasir-coffeshop/assets/136563048/9dc6efb6-eb9a-44d2-af07-2ae3dfaf5926)
