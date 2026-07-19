#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

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
        // Size: 0x208
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_CPOffsetToPercentageBetweenCPs : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "percentage minimum"
            float m_flInputMin; // 0x1d8            
            // metadata: MPropertyFriendlyName "percentage maximum"
            float m_flInputMax; // 0x1dc            
            // metadata: MPropertyFriendlyName "percentage bias"
            float m_flInputBias; // 0x1e0            
            // metadata: MPropertyFriendlyName "starting control point"
            std::int32_t m_nStartCP; // 0x1e4            
            // metadata: MPropertyFriendlyName "ending control point"
            std::int32_t m_nEndCP; // 0x1e8            
            // metadata: MPropertyFriendlyName "offset control point"
            std::int32_t m_nOffsetCP; // 0x1ec            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOuputCP; // 0x1f0            
            // metadata: MPropertyFriendlyName "input control point"
            std::int32_t m_nInputCP; // 0x1f4            
            // metadata: MPropertyFriendlyName "treat distance between points as radius"
            bool m_bRadialCheck; // 0x1f8            
            // metadata: MPropertyFriendlyName "treat offset as scale of total distance"
            bool m_bScaleOffset; // 0x1f9            
            uint8_t _pad01fa[0x2]; // 0x1fa
            // metadata: MPropertyFriendlyName "offset amount"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffset; // 0x1fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CPOffsetToPercentageBetweenCPs because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CPOffsetToPercentageBetweenCPs) == 0x208);
    };
};
