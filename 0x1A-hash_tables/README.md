## 0x1A. C - Hash tables


## Hash Function:
A hash function is a mathematical function that takes an input (or "message") and produces a fixed-size string of characters, which is typically a hash value. The output, or hash code, is commonly a digest that appears random and unrelated to the input data. Hash functions are widely used in computer science for various purposes, such as data integrity verification, password storage, and indexing in data structures like hash tables.

## Characteristics of a Good Hash Function:

## Deterministic: The same input should always produce the same hash code.

## Efficient: The hash function should be computationally efficient and not consume excessive resources.
Uniform Distribution: The output should be evenly distributed across the hash space to reduce collisions.
Fixed Output Size: Regardless of the input size, the hash function produces a fixed-size output.
Collision Resistance: It should be challenging to find two different inputs that produce the same hash code.
Hash Table:
A hash table is a data structure that uses a hash function to map keys to indices in an array. It allows for efficient insertion, deletion, and retrieval of data by minimizing the time complexity of these operations. The key advantage is constant-time average complexity for these operations when the hash function is well-designed.

## How Hash Tables Work:
Hashing: The hash function transforms the key into an index in the array.
Collision Handling: When two keys hash to the same index (collision), different techniques are used to resolve them.
Storage: The key-value pairs are stored in the array at the calculated indices.
Collision and Collision Resolution:
Collision: A collision occurs when two different keys produce the same hash value.

## Collision Resolution:

## Open Addressing: The algorithm searches for the next available slot in the array.

Separate Chaining: Each array index maintains a linked list of key-value pairs.
## Advantages of Hash Tables:

1. Fast Lookup: Retrieving, inserting, or deleting elements has an average constant time complexity.
2. Dynamic Size: Hash tables can dynamically resize to accommodate a changing number of elements.
3. Versatility: Used in various applications, including symbol tables, caches, and databases.
## Drawbacks of Hash Tables:
1. Collisions: Poorly designed hash functions can lead to collisions, impacting performance.
Space Complexity: Hash tables may consume more memory than other data structures.
2. Deterministic Hashing: In some cases, the predictability of hash functions can be exploited.
## Common Use Cases:
1. Database Indexing: Hash tables are used to index large databases for fast retrieval.
2. Caching: Storing frequently accessed data to avoid recomputation.
3. Symbol Tables: Implementing dictionaries, sets, and maps in various programming languages.
4. Network Routing: Hashing IP addresses for efficient routing decisions.
Cryptographic Applications: Hash functions are crucial for data integrity verification and password storage.
