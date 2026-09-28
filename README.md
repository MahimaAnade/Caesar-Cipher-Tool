# Caesar Cipher

A C program that implements Caesar Cipher encryption and decryption using a user-defined shift value.

## About

Caesar Cipher is a simple substitution technique in which each alphabetic character is shifted by a fixed number of positions in the alphabet.

This program allows the user to:

- Enter a text message
- Enter a shift value between 1 and 25
- Encrypt the message
- Decrypt the message
- Convert the input text to uppercase

## Features

- Caesar Cipher encryption
- Caesar Cipher decryption
- User-defined shift value
- Uppercase conversion
- Input validation
- Supports spaces and other non-alphabetic characters

## Technology Used

- **Language:** C
- **Libraries:** `stdio.h`, `string.h`, `ctype.h`

## How It Works

The program shifts each alphabetic character by the specified shift value.

For example, with a shift value of `3`:

```text
A → D
B → E
C → F
