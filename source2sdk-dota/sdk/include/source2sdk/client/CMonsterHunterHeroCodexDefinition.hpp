#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMonsterHunterCodexAuthor.hpp"

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
        // Standard-layout class: true
        // Size: 0x78
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMonsterHunterHeroCodexDefinition
        {
        public:
            CVDataLocalizedToken m_strLocHeroName; // 0x0            
            CVDataLocalizedToken m_strLocFieldNotes; // 0x10            
            CVDataLocalizedToken m_strLocNonHeroName; // 0x20            
            CVDataLocalizedToken m_strLocPersonaFieldNotes; // 0x30            
            CUtlString m_strNonHeroStickerName; // 0x40            
            CUtlString m_strNonHeroStickerDisplayName; // 0x48            
            bool m_bAlwaysUnlocked; // 0x50            
            bool m_bIsHero; // 0x51            
            bool m_bIsForeword; // 0x52            
            uint8_t _pad0053[0x1]; // 0x53
            std::int32_t m_nUnlocksAtCodexCompletionCount; // 0x54            
            uint8_t _pad0058[0x14]; // 0x58
            source2sdk::client::EMonsterHunterCodexAuthor m_eAuthor; // 0x6c            
            source2sdk::client::EMonsterHunterCodexAuthor m_ePersonaAuthor; // 0x70            
            uint8_t _pad0074[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strLocHeroName) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strLocFieldNotes) == 0x10);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strLocNonHeroName) == 0x20);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strLocPersonaFieldNotes) == 0x30);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strNonHeroStickerName) == 0x40);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strNonHeroStickerDisplayName) == 0x48);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_bAlwaysUnlocked) == 0x50);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_bIsHero) == 0x51);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_bIsForeword) == 0x52);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_nUnlocksAtCodexCompletionCount) == 0x54);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_eAuthor) == 0x6c);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_ePersonaAuthor) == 0x70);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterHeroCodexDefinition) == 0x78);
    };
};
