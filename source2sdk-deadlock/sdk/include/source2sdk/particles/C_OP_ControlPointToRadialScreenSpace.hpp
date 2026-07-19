#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"

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
        // Size: 0x200
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ControlPointToRadialScreenSpace : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "source Control Point in World"
            std::int32_t m_nCPIn; // 0x1e0            
            // metadata: MPropertyFriendlyName "Source Control Point offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP1Pos; // 0x1e4            
            // metadata: MPropertyFriendlyName "Set control point number"
            std::int32_t m_nCPOut; // 0x1f0            
            // metadata: MPropertyFriendlyName "Output field 0-2 X/Y/Z"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nCPOutField; // 0x1f4            
            // metadata: MPropertyFriendlyName "Ss Pos and Dot OUT CP"
            std::int32_t m_nCPSSPosOut; // 0x1f8            
            uint8_t _pad01fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ControlPointToRadialScreenSpace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ControlPointToRadialScreenSpace) == 0x200);
    };
};
