#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x5a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Brewmaster_PrimalSplit : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hPrimary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPrimary;
            char m_hPrimary[0x4]; // 0x580            
            // m_hSecondary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecondary;
            char m_hSecondary[0x4]; // 0x584            
            // m_hTertiary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTertiary;
            char m_hTertiary[0x4]; // 0x588            
            source2sdk::entity2::GameTime_t m_fHurlBoulder_CooldownTime; // 0x58c            
            source2sdk::entity2::GameTime_t m_fHDispelMagic_CooldownTime; // 0x590            
            source2sdk::entity2::GameTime_t m_fCyclone_CooldownTime; // 0x594            
            source2sdk::entity2::GameTime_t m_fWindWalk_CooldownTime; // 0x598            
            bool m_bGainedScepterLevels; // 0x59c            
            uint8_t _pad059d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Brewmaster_PrimalSplit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Brewmaster_PrimalSplit) == 0x5a0);
    };
};
