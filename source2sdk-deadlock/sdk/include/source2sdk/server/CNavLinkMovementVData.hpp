#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/server/CNavLinkAnimgraphVar.hpp"
#include "source2sdk/server/CNavLinkMovementVariantDefinition.hpp"

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
        // Standard-layout class: true
        // Size: 0x118
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        class CNavLinkMovementVData
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
            // metadata: MPropertyProvidesEditContextString
            // m_sToolsOnlyOwnerModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sToolsOnlyOwnerModelName;
            char m_sToolsOnlyOwnerModelName[0xe0]; // 0x8            
            // metadata: MPropertyFriendlyName "Animgraph Variables"
            // metadata: MPropertyDescription "List of animgraph variables to use when moving through this navlink. Can include multiple, with different amounts of angular slack. The most permissive animgraph variable that exists on the entity's animgraph will be used,"
            // metadata: MPropertyAutoExpandSelf
            // m_vecAnimgraphVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CNavLinkAnimgraphVar> m_vecAnimgraphVars;
            char m_vecAnimgraphVars[0x18]; // 0xe8            
            // m_vecVariants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CNavLinkMovementVariantDefinition> m_vecVariants;
            char m_vecVariants[0x18]; // 0x100            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVData, m_sToolsOnlyOwnerModelName) == 0x8);
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVData, m_vecAnimgraphVars) == 0xe8);
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVData, m_vecVariants) == 0x100);
        
        static_assert(sizeof(source2sdk::server::CNavLinkMovementVData) == 0x118);
    };
};
