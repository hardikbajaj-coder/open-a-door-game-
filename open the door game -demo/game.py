import time

def play_vault_game():
    levels_database = [
        {"q": "Which planet is known as the Red Planet? ", "a": "mars"},
        {"q": "What is the capital city of India? ", "a": "new delhi"},
        {"q": "How many states are there in India? ", "a": "28"},
        {"q": "Which is the largest animal on Earth? ", "a": "blue whale"},
        {"q": "What is the standard unit of electrical resistance? ", "a": "ohm"},
        {"q": "What is the si unit of power? ", "a": "watt"},
        {"q": "Which is the longest river in the world? ", "a": "nile"},
        {"q": "What does 'URL' stand for in networking? ", "a": "uniform resource locator"},
        {"q": "Which organelle is the powerhouse of the cell? ", "a": "mitochondria"},
        {"q": "what is capital of japan? ", "a": "tokyo"},
        {"q": "how many union teritaries in india ", "a": "8"}

    ]

    # Initialize a global score counter
    total_score = 500  # Starting with 500 points
    doors_bypassed_with_penalty = 0

    print("=========================================================")
    print("🏰 WELCOME TO THE GRAND 11-DOOR VAULT TOURNAMENT! 🏰")
    print("=========================================================")
    print(f" Starting Score: {total_score} Points")
    print("Rules: You must pass through 11 different secure doors.")
    print(" You have 3 attempts per door. If you fail to unlock a door:")
    print("    A penalty of -50 points will be deducted!")
    print("    The door will automatically bypass, moving you to the next level.\n")
    print("Press Enter to approach Door 1...")
    input()

    for current_level in range(1, 12):
        level_data = levels_database[current_level - 1]
        question = level_data["q"]
        correct_answer = level_data["a"]

        print(f"\n --- APPROACHING DOOR {current_level} / 11 ---")
        print(f" Current Score: {total_score} Points")
        
        attempts_left = 3
        door_unlocked = False

        while attempts_left > 0:
            print(f" Attempts remaining for this door: {attempts_left}")
            print(f" QUESTION: {question}")
            
            user_answer = input("👉 Your Answer: ").lower().strip()

            if user_answer == correct_answer:
                print(f" ACCESS GRANTED! Door {current_level} clicked open! 🎉")
                door_unlocked = True
                time.sleep(0.5)
                break  
            else:
                print(" WRONG ENCRYPTION KEY!")
                attempts_left -= 1
                if attempts_left > 0:
                    print(" Retrying security access protocol...\n")
                time.sleep(0.3)

        #  THE NEW PENALTY & SKIP LOGIC
        if not door_unlocked:
            total_score -= 50  # Deduct 50 points
            doors_bypassed_with_penalty += 1
            print("\n💥==================================================💥")
            print(f" DOOR {current_level} BYPASS ACTIVATED! (Failed to crack code)")
            print(f" PENALTY Applied: -50 Points deducted!")
            print(f" The correct key was: {correct_answer.upper()}")
            print(f" Forcing entry... Moving to Door {current_level + 1 if current_level < 10 else 'Exit'}.")
            print("💥==================================================💥\n")
            time.sleep(1.5)

    # final summary game end
    print("\n=========================================================")
    print("🏆👑 TOURNAMENT ENDED: YOU EXIT THE VAULT! 👑🏆")
    print("=========================================================")
    print(f" Final Summary Score: {total_score} Points")
    print(f" Doors Brute-Forced via Penalty: {doors_bypassed_with_penalty} / 10")
    
    if total_score > 350:
        print(" Grade: A")
    elif total_score > 200:
        print(" Grade: B.")
    else:
        print(" Grade: C. Better luck next time!")
    print("=========================================================")

if __name__ == "__main__":
    play_vault_game()
