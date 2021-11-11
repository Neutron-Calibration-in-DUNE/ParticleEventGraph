/**
 * @file    ParticleEventGraph.hh
 * @brief   
 * @ingroup ParticleEventGraph
 * @author  Nicholas Carrara (nmcarrara@ucdavis.edu),
**/
#pragma once

#include "Particle.hh"
#include "EventCollection.hh"
#include "CausalLinkCollection.hh"

namespace peg
{
    // BEGIN ParticleEventGraph group
    // -----------------------------------------------
    /// @ingroup ParticleEventGraph
    /// @{
    //-----------------------------------------------------------------------
    //-----------------------------------------------------------------------
    // class definition
    /**
     * @brief Brief description of ParticleEventGraph
     * @see @ref ParticleEventGraph 
     *
     * This class ...
     *
     * Configuration parameters
     * =========================
     *
     * - ** (string, default: "largeant"): tag of the input data
     */
    class ParticleEventGraph
    {
    public:
        ParticleEventGraph();
        ~ParticleEventGraph();

    private:
        Particle primaryParticle_;          ///< the particle which generated the graph
        EventCollection eventCollection_;   ///< collection of events for this particle
        CausalLinkCollection causalLinkCollection_; ///< collection of links between events

    }; // class ParticleEventGraph
    /// @}
    // END ParticleEventGraph group
    // -------------------------------------------------
} // namespace peg