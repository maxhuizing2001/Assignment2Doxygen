using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/// @author    Max Huizing
/// @version   1
/// @since     18-11-2022


/// This is the brief description.
///
/// This is the *detailed* description.
/// 
/// ### Example code
/// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.cpp
/// MyClass* a = new MyClass(); // a comment
/// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

namespace Doxygen
{
    class MyClass
    {
    public:
        /// Brief description about the function.
        /// 
        /// Detailed description. More details. This is similar to Doxygen::anothermemberfunction().
        /// @param a This describes a
        /// @param b This describes b
        /// @returns Nothing important
        /// @see anothermemberfunction() anothermemberfunction2()
        /// @note A little side note
        /// @attention A little more important than a note
        /// @warning A warning is super important
        void memberfunction(int a, int b);

        void anothermemberfunction();
        void anothermemberfunction2();
        
    }
}
