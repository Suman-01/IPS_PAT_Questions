# Lightweight Block Cipher Design

## Cipher Design

### Block Size and Key Size
- **Block Size**: 32 bits
- **Key Size**: 64 bits
- **Number of Rounds**: 10
- **Structure**: Substitution-Permutation Network (SPN)

### Justification
- **Block Size**: A 32-bit block size is chosen to balance security and efficiency, suitable for lightweight applications.
- **Key Size**: A 64-bit key size provides a reasonable level of security while keeping the computational cost low.
- **Number of Rounds**: 10 rounds are chosen to ensure sufficient diffusion and confusion.
- **Structure**: SPN structure is selected for its simplicity and effectiveness in providing security through substitution and permutation.

### Encryption Process
1. **Key Schedule**: Generate round keys from the master key.
2. **Initial State**: Set the initial state to the plaintext block.
3. **Rounds**:
   - XOR the state with the round key.
   - Apply the S-Box substitution.
   - Apply the permutation.
4. **Final State**: The final state after the last round is the ciphertext.

### Decryption Process
1. **Key Schedule**: Generate round keys from the master key.
2. **Initial State**: Set the initial state to the ciphertext block.
3. **Rounds** (in reverse order):
   - Apply the inverse permutation.
   - Apply the inverse S-Box substitution.
   - XOR the state with the round key.
4. **Final State**: The final state after the last round is the plaintext.

### Pseudocode
```plaintext
function encrypt(plaintext, master_key):
    state = plaintext
    round_keys = key_schedule(master_key)
    for round_key in round_keys:
        state = state XOR round_key
        state = substitute(state)
        state = permute(state)
    return state

function decrypt(ciphertext, master_key):
    state = ciphertext
    round_keys = key_schedule(master_key)
    for round_key in reverse(round_keys):
        state = inverse_permute(state)
        state = inverse_substitute(state)
        state = state XOR round_key
    return state
```

## Security Analysis

### Potential Attacks
- **Brute Force**: With a 64-bit key, brute force attacks are computationally expensive.
- **Differential Cryptanalysis**: The SPN structure with 10 rounds provides sufficient non-linearity to resist differential attacks.
- **Linear Cryptanalysis**: The use of S-Box and permutation ensures resistance against linear cryptanalysis.

### Comparison with Existing Ciphers
- **PRESENT**: Similar block size but uses a 80-bit or 128-bit key. Our design is simpler with a 64-bit key.
- **SIMON**: Uses a Feistel structure, while our design uses SPN for simplicity.
- **SPECK**: Also uses a Feistel structure, but our SPN design provides a different balance of security and efficiency.

## Performance Considerations

### Computational Cost
- **XOR Operations**: 10 per round, total 100 for 10 rounds.
- **S-Box Lookups**: 8 per round, total 80 for 10 rounds.
- **Permutations**: 1 per round, total 10 for 10 rounds.

### Memory and Power Consumption
- **Memory**: Minimal memory required for storing the S-Box, permutation table, and round keys.
- **Power Consumption**: Low power consumption due to the simplicity of operations (XOR, S-Box, permutation).

### Latency
- **Encryption/Decryption Speed**: Fast due to the lightweight operations, suitable for 8-bit microcontrollers.

## Implementation & Simulation

### Python Implementation
The provided Python code implements the encryption and decryption functions, along with a client-server model for testing.

### Performance Evaluation
- **Encryption Speed**: Measured in terms of blocks per second.
- **Memory Usage**: Measured in terms of bytes required for the S-Box, permutation table, and round keys.

## Conclusion
The proposed lightweight block cipher provides a good balance of security, efficiency, and low computational cost, making it suitable for resource-constrained environments.

## References
- [PRESENT Cipher](https://link.springer.com/article/10.1007/s10207-007-0033-6)
- [SIMON and SPECK](https://eprint.iacr.org/2013/404.pdf)
