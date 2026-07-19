#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Brewmaster_PrimalSplit : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_hPrimary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrimary;
            char m_hPrimary[0x4]; // 0x6a8            
            // m_hSecondary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSecondary;
            char m_hSecondary[0x4]; // 0x6ac            
            // m_hTertiary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTertiary;
            char m_hTertiary[0x4]; // 0x6b0            
            source2sdk::entity2::GameTime_t m_fHurlBoulder_CooldownTime; // 0x6b4            
            source2sdk::entity2::GameTime_t m_fHDispelMagic_CooldownTime; // 0x6b8            
            source2sdk::entity2::GameTime_t m_fCyclone_CooldownTime; // 0x6bc            
            source2sdk::entity2::GameTime_t m_fWindWalk_CooldownTime; // 0x6c0            
            bool m_bGainedScepterLevels; // 0x6c4            
            uint8_t _pad06c5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Brewmaster_PrimalSplit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Brewmaster_PrimalSplit) == 0x6c8);
    };
};
