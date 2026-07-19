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
        // Size: 0x2c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_AnimGraphServices_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_sTaskHandshakeType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sTaskHandshakeType;
            char m_sTaskHandshakeType[0x30]; // 0x90            
            // m_sTaskHandshakeTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sTaskHandshakeTypeShared;
            char m_sTaskHandshakeTypeShared[0x30]; // 0xc0            
            // m_bTaskHandshakeRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bTaskHandshakeRestart;
            char m_bTaskHandshakeRestart[0x28]; // 0xf0            
            // m_sMovementHandshakeType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementHandshakeType;
            char m_sMovementHandshakeType[0x30]; // 0x118            
            // m_sMovementHandshakeTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementHandshakeTypeShared;
            char m_sMovementHandshakeTypeShared[0x30]; // 0x148            
            // m_bMovementHandshakeRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bMovementHandshakeRestart;
            char m_bMovementHandshakeRestart[0x28]; // 0x178            
            // m_sNavLinkType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sNavLinkType;
            char m_sNavLinkType[0x30]; // 0x1a0            
            // m_sNavLinkTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sNavLinkTypeShared;
            char m_sNavLinkTypeShared[0x30]; // 0x1d0            
            // m_vecHitDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vecHitDirection;
            char m_vecHitDirection[0x28]; // 0x200            
            // m_flHitHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flHitHeading;
            char m_flHitHeading[0x28]; // 0x228            
            // m_vecHitOffset has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vecHitOffset;
            char m_vecHitOffset[0x28]; // 0x250            
            // m_flHitStrength has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flHitStrength;
            char m_flHitStrength[0x28]; // 0x278            
            // m_nHitBone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<std::int32_t> m_nHitBone;
            char m_nHitBone[0x28]; // 0x2a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_AnimGraphServices_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_AnimGraphServices_GraphController) == 0x2c8);
    };
};
