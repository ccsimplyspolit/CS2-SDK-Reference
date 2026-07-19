#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t max_steps; // 0x580            
            VectorWS m_vTarget; // 0x584            
            Vector m_vDir; // 0x590            
            std::int32_t m_nSteps; // 0x59c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5a0            
            uint8_t _pad05a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds) == 0x5a8);
    };
};
