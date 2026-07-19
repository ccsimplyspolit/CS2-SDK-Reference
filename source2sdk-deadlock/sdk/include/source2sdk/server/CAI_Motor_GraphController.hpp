#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0x338
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_Motor_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_bNavLinkIsOnPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bNavLinkIsOnPath;
            char m_bNavLinkIsOnPath[0x28]; // 0x90            
            // m_flPathDistanceToNavLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flPathDistanceToNavLink;
            char m_flPathDistanceToNavLink[0x28]; // 0xb8            
            // m_sMovementGaitSetNext has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementGaitSetNext;
            char m_sMovementGaitSetNext[0x30]; // 0xe0            
            // m_sNextStance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sNextStance;
            char m_sNextStance[0x30]; // 0x110            
            // m_sMovementGait has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementGait;
            char m_sMovementGait[0x30]; // 0x140            
            // m_sMovementGaitSet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementGaitSet;
            char m_sMovementGaitSet[0x30]; // 0x170            
            // m_sMovementGaitPrevious has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementGaitPrevious;
            char m_sMovementGaitPrevious[0x30]; // 0x1a0            
            // m_sMovementGaitSetPrevious has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementGaitSetPrevious;
            char m_sMovementGaitSetPrevious[0x30]; // 0x1d0            
            // m_sCurrentStance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sCurrentStance;
            char m_sCurrentStance[0x30]; // 0x200            
            // m_sPreviousStance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sPreviousStance;
            char m_sPreviousStance[0x30]; // 0x230            
            // m_sCustomMovementGait has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sCustomMovementGait;
            char m_sCustomMovementGait[0x30]; // 0x260            
            // m_bWalking has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bWalking;
            char m_bWalking[0x28]; // 0x290            
            CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0x2b8            
            CAnimGraphTagOptionalRef m_sAllowMovementOffNavMesh; // 0x2d8            
            CAnimGraphTagOptionalRef m_sRestrictMovementToNavMeshDuringCustomMove; // 0x2f8            
            CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0x318            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Motor_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Motor_GraphController) == 0x338);
    };
};
