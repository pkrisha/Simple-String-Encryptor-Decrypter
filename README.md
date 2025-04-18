
# 🔐 Simple String Encryptor & Decrypter

This is a basic C program to encrypt and decrypt a string using a simple Caesar cipher logic. The user can choose to either encrypt or decrypt a given string by shifting its characters based on a numeric key.

---

## 🚀 Features

- Encrypt any string using a Caesar cipher.
- Decrypt an encrypted string with the correct key.
- User input-driven interface.
- Lightweight and easy to understand for beginners in C programming.

---

## 🛠️ How It Works

1. The user enters a string.
2. The user selects whether to encrypt or decrypt.
3. A key (number between 1 and 9) is provided.
4. Each character in the string is shifted by the key value:
   - **Encryption:** characters are shifted forward.
   - **Decryption:** characters are shifted backward.

---

## 📦 Sample Output
enter the string you want to encrypt and decrypt: HelloWorld


choose the following option given below:

enter the 1 if you want to encrypt the string

enter the 2 if you want to decrypt the string

1

choose the numbers from 1 to 9 to set value of the key: 3

Encrypted string: KhoorZruog


enter the string you want to encrypt and decrypt: KhoorZruog

choose the following option given below:

enter the 1 if you want to encrypt the string

enter the 2 if you want to decrypt the string

2

enter the value of the key: 3

Decrypted string: HelloWorld

---

## ⚠️ Note

- Avoid using `gets()` in production code due to buffer overflow risks. Replace with `fgets()` for better safety.
- This program uses a basic Caesar cipher and is **not** suitable for real-world encryption needs.

---

## 📄 License

This project is licensed under the [MIT License] (LICENSE).

---

## 🤝 Contributing

Pull requests are welcome! For major changes, please open an issue first to discuss what you'd like to change.

---

## 👤 Author

- [krisha patel](https://github.com/pkrisha)
