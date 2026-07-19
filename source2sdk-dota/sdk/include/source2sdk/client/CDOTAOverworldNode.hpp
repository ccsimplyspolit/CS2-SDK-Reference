#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EOverworldNodeFlags.hpp"
#include "source2sdk/client/OverworldNodeID_t.hpp"

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
        // Size: 0xa8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldNode
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_node"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::OverworldNodeID_t m_unID; // 0x0            
            uint8_t _pad0002[0x6]; // 0x2
            // metadata: MPropertyDescription "Name/Key used to look up which Visual Novel dialogue to use."
            CUtlString m_sDialogueName; // 0x8            
            CUtlString m_sEncounterName; // 0x10            
            uint8_t _pad0018[0x8]; // 0x18
            CUtlString m_sRewardEventAction; // 0x20            
            Vector2D m_vPos; // 0x28            
            source2sdk::client::EOverworldNodeFlags m_eNodeFlags; // 0x30            
            bool m_bSkipGrantingRewardOnUnlock; // 0x34            
            uint8_t _pad0035[0x3]; // 0x35
            // metadata: MPropertyDescription "If defined, this node and the path to it are invisible and unreachable to players unless they own a specific event action."
            CUtlString m_sHiddenWithoutEventAction; // 0x38            
            CUtlString m_sJSEvent; // 0x40            
            // metadata: MPropertyDescription "A css class to be applied to the node."
            CUtlString m_sCustomClass; // 0x48            
            float m_flUnlockDelay; // 0x50            
            uint8_t _pad0054[0x4]; // 0x54
            // metadata: MPropertyDescription "Yaw rotation of model preview (if this Node has one)."
            float m_flModelRotation; // 0x58            
            // metadata: MPropertyDescription "Percent scale of model preview (if this Node has one)."
            float m_flModelScalePercentage; // 0x5c            
            // metadata: MPropertyDescription "2D panorama position offset of model preview (if this Node has one)."
            Vector2D m_vModelOffset; // 0x60            
            // metadata: MPropertyDescription "CSS Classes that will be applied to the map when this node is unlocked."
            // m_vecUnlockMapClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecUnlockMapClasses;
            char m_vecUnlockMapClasses[0x18]; // 0x68            
            // metadata: MPropertyDescription "CSS Classes that will be applied to the map when this node is being visited, and removed when leaving it."
            // m_vecVisitMapClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecVisitMapClasses;
            char m_vecVisitMapClasses[0x18]; // 0x80            
            uint8_t _pad0098[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sDialogueName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sEncounterName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sRewardEventAction) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vPos) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_eNodeFlags) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_bSkipGrantingRewardOnUnlock) == 0x34);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sHiddenWithoutEventAction) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sJSEvent) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sCustomClass) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_flUnlockDelay) == 0x50);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_flModelRotation) == 0x58);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_flModelScalePercentage) == 0x5c);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vModelOffset) == 0x60);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vecUnlockMapClasses) == 0x68);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vecVisitMapClasses) == 0x80);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldNode) == 0xa8);
    };
};
