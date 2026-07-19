#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_EconWearable.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimatingActivity;
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
        // Size: 0xd08
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTAWearableItem : public source2sdk::client::C_EconWearable
        {
        public:
            bool m_bOwnerModelChanged; // 0xc68            
            bool m_bIsGeneratingEconItem; // 0xc69            
            bool m_bIsItemVisibleOnGeneratedEntity; // 0xc6a            
            bool m_bHideWearableButDrawAdditionalWearables; // 0xc6b            
            // m_hAdditionalWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimatingActivity> m_hAdditionalWearable;
            char m_hAdditionalWearable[0x4]; // 0xc6c            
            // m_hDrawWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTAWearableItem> m_hDrawWearable;
            char m_hDrawWearable[0x4]; // 0xc70            
            bool m_bHiddenByCombiner; // 0xc74            
            bool m_bHiddenByEquipmentSlot; // 0xc75            
            bool m_bIsPortrait; // 0xc76            
            uint8_t _pad0c77[0x1]; // 0xc77
            float m_fZDelta; // 0xc78            
            uint8_t _pad0c7c[0x4]; // 0xc7c
            // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
            char m_combinerMaterialOverrideList[0x18]; // 0xc80            
            uint8_t _pad0c98[0x8]; // 0xc98
            bool m_bCombinerMaterialOverrideListChanged; // 0xca0            
            bool m_bRubickFollower; // 0xca1            
            bool m_bHasPlayerModel; // 0xca2            
            uint8_t _pad0ca3[0x4d]; // 0xca3
            // m_vecAdditionalClientsideWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::CBaseAnimatingActivity>> m_vecAdditionalClientsideWearables;
            char m_vecAdditionalClientsideWearables[0x18]; // 0xcf0            
            
            // Datamap fields:
            // bool inPortrait; // 0x7fffffff
            // uint32_t ItemDefIndex; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAWearableItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAWearableItem) == 0xd08);
    };
};
