#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_EconItemView.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x13a0
        // Has VTable
        // Is Abstract
        // Construct disallowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_CSGO_TeamPreviewCharacterPosition : public source2sdk::client::C_BaseEntity
        {
        public:
            std::int32_t m_nVariant; // 0x600            
            std::int32_t m_nRandom; // 0x604            
            std::int32_t m_nOrdinal; // 0x608            
            uint8_t _pad060c[0x4]; // 0x60c
            CUtlString m_sWeaponName; // 0x610            
            std::uint64_t m_xuid; // 0x618            
            source2sdk::client::C_EconItemView m_agentItem; // 0x620            
            source2sdk::client::C_EconItemView m_glovesItem; // 0xa90            
            source2sdk::client::C_EconItemView m_weaponItem; // 0xf00            
            uint8_t _pad1370[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_TeamPreviewCharacterPosition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_TeamPreviewCharacterPosition) == 0x13a0);
    };
};
