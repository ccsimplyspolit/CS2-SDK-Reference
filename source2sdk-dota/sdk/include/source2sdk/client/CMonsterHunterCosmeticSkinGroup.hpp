#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/item_definition_index_t.hpp"

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
        // Size: 0x68
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMonsterHunterCosmeticSkinGroup
        {
        public:
            CUtlString m_strSetName; // 0x0            
            // m_vecActionIDSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecActionIDSlots;
            char m_vecActionIDSlots[0x18]; // 0x8            
            bool m_bRequiresPremium; // 0x20            
            bool m_bShowPremiumPurchaseAsCrafting; // 0x21            
            uint8_t _pad0022[0x6]; // 0x22
            CUtlString m_strCustomClass; // 0x28            
            CUtlString m_strCustomStyleSelectAnimation; // 0x30            
            float m_flAnimationFreezeTime; // 0x38            
            float m_flCustomStyleSelectRotation; // 0x3c            
            source2sdk::client::item_definition_index_t m_unPreviewItemIndex; // 0x40            
            uint8_t _pad0044[0x24];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_strSetName) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_vecActionIDSlots) == 0x8);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_bRequiresPremium) == 0x20);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_bShowPremiumPurchaseAsCrafting) == 0x21);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_strCustomClass) == 0x28);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_strCustomStyleSelectAnimation) == 0x30);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_flAnimationFreezeTime) == 0x38);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_flCustomStyleSelectRotation) == 0x3c);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_unPreviewItemIndex) == 0x40);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterCosmeticSkinGroup) == 0x68);
    };
};
