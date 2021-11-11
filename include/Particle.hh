/**
 * @file    Particle.hh
 * @brief   
 * @ingroup Particle
 * @author  Nicholas Carrara (nmcarrara@ucdavis.edu),
**/
#pragma once

namespace peg
{
    // BEGIN Particle group
    // -----------------------------------------------
    /// @ingroup Particle
    /// @{
    //-----------------------------------------------------------------------
    //-----------------------------------------------------------------------
    // class definition
    /**
     * @brief Brief description of Particle
     * @see @ref Particle 
     *
     * This class ...
     *
     * Configuration parameters
     * =========================
     *
     * - ** (string, default: "largeant"): tag of the input data
     */
    class Particle
    {
    public:
        Particle();
        ~Particle();
    private:
        // attributes which must be defined
        
        int pdgCode_;
    }; // class Particle
    /// @}
    // END Particle group
    // -------------------------------------------------
} // namespace peg
