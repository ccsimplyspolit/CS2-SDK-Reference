#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        class CDOTA_Ability_ChaosKnight_Reality_Rift : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float m_flPercentage; // 0x580            
            uint8_t _pad0584[0x4]; // 0x584
            // m_FXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_FXIndex;
            char m_FXIndex[0x18]; // 0x588            
            // m_hRiftIllusion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRiftIllusion;
            char m_hRiftIllusion[0x4]; // 0x5a0            
            uint8_t _pad05a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_ChaosKnight_Reality_Rift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_ChaosKnight_Reality_Rift) == 0x5a8);
    };
};
