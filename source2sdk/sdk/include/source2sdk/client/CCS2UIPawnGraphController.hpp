#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0x1d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCS2UIPawnGraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_nAnimationSeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_nAnimationSeed;
            char m_nAnimationSeed[0x18]; // 0x88            
            // m_characterMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_characterMode;
            char m_characterMode[0x18]; // 0xa0            
            // m_bCharacterModeReset has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bCharacterModeReset;
            char m_bCharacterModeReset[0x18]; // 0xb8            
            // m_nTeamPreviewVariant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_nTeamPreviewVariant;
            char m_nTeamPreviewVariant[0x18]; // 0xd0            
            // m_nTeamPreviewRandom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_nTeamPreviewRandom;
            char m_nTeamPreviewRandom[0x18]; // 0xe8            
            // m_nTeamPreviewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_nTeamPreviewPosition;
            char m_nTeamPreviewPosition[0x18]; // 0x100            
            // m_endOfMatchCelebration has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_endOfMatchCelebration;
            char m_endOfMatchCelebration[0x18]; // 0x118            
            // m_action has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_action;
            char m_action[0x18]; // 0x130            
            // m_bannerAnimation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_bannerAnimation;
            char m_bannerAnimation[0x18]; // 0x148            
            // m_weaponCategory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_weaponCategory;
            char m_weaponCategory[0x18]; // 0x160            
            // m_weaponType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_weaponType;
            char m_weaponType[0x18]; // 0x178            
            // m_weaponState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_weaponState;
            char m_weaponState[0x18]; // 0x190            
            // m_inspectTurnAngle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_inspectTurnAngle;
            char m_inspectTurnAngle[0x18]; // 0x1a8            
            // m_bCT has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bCT;
            char m_bCT[0x18]; // 0x1c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCS2UIPawnGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCS2UIPawnGraphController) == 0x1d8);
    };
};
