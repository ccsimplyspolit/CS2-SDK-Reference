#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmGraphDefinition_ExternalGraphSlot_t.hpp"
#include "source2sdk/animlib/CNmGraphDefinition_ExternalPoseSlot_t.hpp"
#include "source2sdk/animlib/CNmGraphDefinition_ReferencedGraphSlot_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"
namespace source2sdk
{
    namespace animlib
    {
        struct CNmGraphVariationUserData;
    };
};

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x1b8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmGraphDefinition
        {
        public:
            CGlobalSymbol m_variationID; // 0x0            
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x8]; // 0x8            
            // m_supportedSecondarySkeletons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton>> m_supportedSecondarySkeletons;
            char m_supportedSecondarySkeletons[0x18]; // 0x10            
            source2sdk::animlib::CNmGraphVariationUserData* m_pUserData; // 0x28            
            // m_persistentNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_persistentNodeIndices;
            char m_persistentNodeIndices[0x18]; // 0x30            
            std::int16_t m_nRootNodeIdx; // 0x48            
            uint8_t _pad004a[0x6]; // 0x4a
            // m_controlParameterIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_controlParameterIDs;
            char m_controlParameterIDs[0x18]; // 0x50            
            // m_virtualParameterIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_virtualParameterIDs;
            char m_virtualParameterIDs[0x18]; // 0x68            
            // m_virtualParameterNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_virtualParameterNodeIndices;
            char m_virtualParameterNodeIndices[0x18]; // 0x80            
            // m_referencedGraphSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmGraphDefinition_ReferencedGraphSlot_t> m_referencedGraphSlots;
            char m_referencedGraphSlots[0x18]; // 0x98            
            // m_externalGraphSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmGraphDefinition_ExternalGraphSlot_t> m_externalGraphSlots;
            char m_externalGraphSlots[0x18]; // 0xb0            
            // m_externalPoseSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmGraphDefinition_ExternalPoseSlot_t> m_externalPoseSlots;
            char m_externalPoseSlots[0x18]; // 0xc8            
            uint8_t _pad00e0[0x70]; // 0xe0
            // m_nodePaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_nodePaths;
            char m_nodePaths[0x18]; // 0x150            
            // m_resources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleVoid> m_resources;
            char m_resources[0x18]; // 0x168            
            uint8_t _pad0180[0x38];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_variationID) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_skeleton) == 0x8);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_supportedSecondarySkeletons) == 0x10);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_pUserData) == 0x28);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_persistentNodeIndices) == 0x30);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_nRootNodeIdx) == 0x48);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_controlParameterIDs) == 0x50);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_virtualParameterIDs) == 0x68);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_virtualParameterNodeIndices) == 0x80);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_referencedGraphSlots) == 0x98);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_externalGraphSlots) == 0xb0);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_externalPoseSlots) == 0xc8);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_nodePaths) == 0x150);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_resources) == 0x168);
        
        static_assert(sizeof(source2sdk::animlib::CNmGraphDefinition) == 0x1b8);
    };
};
