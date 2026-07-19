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
        // Size: 0x138
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavLinkMotor_DefaultNavLink_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_tNavLinkTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CTransform> m_tNavLinkTarget;
            char m_tNavLinkTarget[0x18]; // 0x90            
            // m_sNavLinkEntryType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_sNavLinkEntryType;
            char m_sNavLinkEntryType[0x18]; // 0xa8            
            // m_sNavLinkExitType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_sNavLinkExitType;
            char m_sNavLinkExitType[0x18]; // 0xc0            
            // m_sNavLinkState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_sNavLinkState;
            char m_sNavLinkState[0x18]; // 0xd8            
            // m_sNavLinkEntryGait has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_sNavLinkEntryGait;
            char m_sNavLinkEntryGait[0x18]; // 0xf0            
            // m_sNavLinkExitGait has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_sNavLinkExitGait;
            char m_sNavLinkExitGait[0x18]; // 0x108            
            // m_vNavLinkExitDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<Vector> m_vNavLinkExitDirection;
            char m_vNavLinkExitDirection[0x18]; // 0x120            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkMotor_DefaultNavLink_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkMotor_DefaultNavLink_GraphController) == 0x138);
    };
};
