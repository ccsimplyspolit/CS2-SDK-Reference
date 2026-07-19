#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x538
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvSoundscape : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnPlay; // 0x4a8            
            float m_flRadius; // 0x4c0            
            uint8_t _pad04c4[0x4]; // 0x4c4
            CGameSoundEventName m_soundEventName; // 0x4c8            
            bool m_bOverrideWithEvent; // 0x4d0            
            uint8_t _pad04d1[0x3]; // 0x4d1
            // metadata: MNotSaved
            std::int32_t m_soundscapeIndex; // 0x4d4            
            // metadata: MNotSaved
            std::int32_t m_soundscapeEntityListId; // 0x4d8            
            uint8_t _pad04dc[0x4]; // 0x4dc
            CUtlSymbolLarge m_positionNames[8]; // 0x4e0            
            // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CEnvSoundscape> m_hProxySoundscape;
            char m_hProxySoundscape[0x4]; // 0x520            
            bool m_bDisabled; // 0x524            
            uint8_t _pad0525[0x3]; // 0x525
            CUtlSymbolLarge m_soundscapeName; // 0x528            
            // metadata: MNotSaved
            std::uint32_t m_soundEventHash; // 0x530            
            uint8_t _pad0534[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggleEnabled; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvSoundscape) == 0x538);
    };
};
