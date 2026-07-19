#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CEconWearable.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimatingActivity;
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
        // Size: 0x908
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTAWearableItem : public source2sdk::server::CEconWearable
        {
        public:
            bool m_bOwnerModelChanged; // 0x900            
            bool m_bIsGeneratingEconItem; // 0x901            
            bool m_bIsItemVisibleOnGeneratedEntity; // 0x902            
            bool m_bHideWearableButDrawAdditionalWearables; // 0x903            
            // m_hAdditionalWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimatingActivity> m_hAdditionalWearable;
            char m_hAdditionalWearable[0x4]; // 0x904            
            
            // Datamap fields:
            // bool inPortrait; // 0x7fffffff
            // uint32_t ItemDefIndex; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAWearableItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAWearableItem) == 0x908);
    };
};
