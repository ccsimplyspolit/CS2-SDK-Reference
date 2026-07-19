#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BodySectionAuthority_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/server/CNavLinkApproachConditions.hpp"

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
        // Size: 0x108
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavLinkMovementVariantDefinition
        {
        public:
            // metadata: MPropertyDescription "External nav link animgraph to connect to the NPC when using the navlink"
            // m_sExternalGraphName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition>> m_sExternalGraphName;
            char m_sExternalGraphName[0xe0]; // 0x0            
            // metadata: MPropertyDescription "What part of the body is does this navlink directly control?"
            source2sdk::client::BodySectionAuthority_t m_nBodySectionAuthority; // 0xe0            
            // metadata: MPropertyDescription "Does the external graph support off path exits from the navlink performance?"
            bool m_bSupportsExit; // 0xe4            
            uint8_t _pad00e5[0x3]; // 0xe5
            // metadata: MPropertyDescription "How much normal ( e.g. ground ) path we have to have after the navlink to trigger exit to movement."
            float m_flMinimalPathLengthForMovingExit; // 0xe8            
            // metadata: MPropertyDescription "If the navlink destination and the path goal are less than this distance from each other snap the navlink destination to the goal"
            float m_flSnapDestinationToPathGoalThreshold; // 0xec            
            // m_vecApproachConditions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CNavLinkApproachConditions> m_vecApproachConditions;
            char m_vecApproachConditions[0x18]; // 0xf0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVariantDefinition, m_sExternalGraphName) == 0x0);
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVariantDefinition, m_nBodySectionAuthority) == 0xe0);
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVariantDefinition, m_bSupportsExit) == 0xe4);
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVariantDefinition, m_flMinimalPathLengthForMovingExit) == 0xe8);
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVariantDefinition, m_flSnapDestinationToPathGoalThreshold) == 0xec);
        static_assert(offsetof(source2sdk::server::CNavLinkMovementVariantDefinition, m_vecApproachConditions) == 0xf0);
        
        static_assert(sizeof(source2sdk::server::CNavLinkMovementVariantDefinition) == 0x108);
    };
};
