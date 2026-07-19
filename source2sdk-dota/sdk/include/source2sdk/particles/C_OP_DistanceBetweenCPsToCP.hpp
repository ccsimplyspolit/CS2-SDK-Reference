#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleParentSetMode_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x298
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_DistanceBetweenCPsToCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "starting control point"
            std::int32_t m_nStartCP; // 0x1e0            
            // metadata: MPropertyFriendlyName "ending control point"
            std::int32_t m_nEndCP; // 0x1e4            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutputCP; // 0x1e8            
            // metadata: MPropertyFriendlyName "output control point field"
            std::int32_t m_nOutputCPField; // 0x1ec            
            // metadata: MPropertyFriendlyName "only set distance once"
            bool m_bSetOnce; // 0x1f0            
            uint8_t _pad01f1[0x3]; // 0x1f1
            // metadata: MPropertyFriendlyName "distance minimum"
            float m_flInputMin; // 0x1f4            
            // metadata: MPropertyFriendlyName "distance maximum"
            float m_flInputMax; // 0x1f8            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1fc            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x200            
            // metadata: MPropertyFriendlyName "maximum trace length"
            float m_flMaxTraceLength; // 0x204            
            // metadata: MPropertyFriendlyName "LOS Failure Scale"
            float m_flLOSScale; // 0x208            
            // metadata: MPropertyFriendlyName "ensure line of sight"
            bool m_bLOS; // 0x20c            
            // metadata: MPropertyFriendlyName "LOS collision group"
            char m_CollisionGroupName[128]; // 0x20d            
            uint8_t _pad028d[0x3]; // 0x28d
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x290            
            // metadata: MPropertyFriendlyName "set parent"
            source2sdk::particles::ParticleParentSetMode_t m_nSetParent; // 0x294            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DistanceBetweenCPsToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DistanceBetweenCPsToCP) == 0x298);
    };
};
