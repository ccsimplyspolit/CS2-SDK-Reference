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
        // Size: 0x160
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFacingServices_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_flFacingHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flFacingHeading;
            char m_flFacingHeading[0x28]; // 0x90            
            // m_vFacingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vFacingTarget;
            char m_vFacingTarget[0x28]; // 0xb8            
            // m_sMovementStrafingState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementStrafingState;
            char m_sMovementStrafingState[0x30]; // 0xe0            
            // m_sFacingReason has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sFacingReason;
            char m_sFacingReason[0x30]; // 0x110            
            CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0x140            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFacingServices_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFacingServices_GraphController) == 0x160);
    };
};
