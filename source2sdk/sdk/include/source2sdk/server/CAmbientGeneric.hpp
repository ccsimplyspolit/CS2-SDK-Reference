#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/soundlevel_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/dynpitchvol_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x550
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CAmbientGeneric : public source2sdk::server::CPointEntity
        {
        public:
            float m_radius; // 0x4a8            
            float m_flMaxRadius; // 0x4ac            
            source2sdk::client::soundlevel_t m_iSoundLevel; // 0x4b0            
            source2sdk::server::dynpitchvol_t m_dpv; // 0x4b4            
            bool m_fActive; // 0x518            
            bool m_fLooping; // 0x519            
            uint8_t _pad051a[0x6]; // 0x51a
            CGameSoundEventName m_iszSound; // 0x520            
            CUtlSymbolLarge m_sSourceEntName; // 0x528            
            // metadata: MNotSaved
            // m_hSoundSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSoundSource;
            char m_hSoundSource[0x4]; // 0x530            
            // metadata: MNotSaved
            CEntityIndex m_nSoundSourceEntIndex; // 0x534            
            uint8_t _pad0538[0x18];
            
            // Datamap fields:
            // void InputPlaySound; // 0x0
            // void InputStopSound; // 0x0
            // void InputToggleSound; // 0x0
            // float InputPitch; // 0x0
            // float InputVolume; // 0x0
            // float InputFadeIn; // 0x0
            // float InputFadeOut; // 0x0
            // int32_t fadein; // 0x7fffffff
            // int32_t fadeout; // 0x7fffffff
            // int32_t fadeinsecs; // 0x7fffffff
            // int32_t fadeoutsecs; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAmbientGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAmbientGeneric) == 0x550);
    };
};
