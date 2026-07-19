#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleEntityPos_t.hpp"

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
        // Size: 0x1f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointToPlayer : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nCP1; // 0x1e0            
            // metadata: MPropertyFriendlyName "control point offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP1Pos; // 0x1e4            
            // metadata: MPropertyFriendlyName "use eye orientation"
            bool m_bOrientToEyes; // 0x1f0            
            uint8_t _pad01f1[0x3]; // 0x1f1
            // metadata: MPropertyFriendlyName "position to get"
            source2sdk::particles::ParticleEntityPos_t m_nPosition; // 0x1f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToPlayer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToPlayer) == 0x1f8);
    };
};
