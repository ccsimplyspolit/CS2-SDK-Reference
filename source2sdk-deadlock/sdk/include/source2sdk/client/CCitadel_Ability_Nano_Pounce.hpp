#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1748
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentTarget"
        // static metadata: MNetworkVarNames "EHANDLE m_hLastCastTarget"
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDeparturePosition"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
        // static metadata: MNetworkVarNames "bool m_bIsFirstCastCompleted"
        // static metadata: MNetworkVarNames "GameTime_t m_tDoubleCastWindow"
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_Pounce : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x500]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bActive; // 0x16d8            
            uint8_t _pad16d9[0x3]; // 0x16d9
            // metadata: MNetworkEnable
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x16dc            
            // metadata: MNetworkEnable
            // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastCastTarget;
            char m_hLastCastTarget[0x4]; // 0x16e0            
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0x16e4            
            // metadata: MNetworkEnable
            Vector m_vDeparturePosition; // 0x16f0            
            uint8_t _pad16fc[0x4]; // 0x16fc
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flDepartureTime; // 0x1700            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flArrivalTime; // 0x1718            
            Vector m_vLastKnownSafePos; // 0x1730            
            bool m_bStartedPhase01; // 0x173c            
            bool m_bStartedPhase02; // 0x173d            
            // metadata: MNetworkEnable
            bool m_bIsFirstCastCompleted; // 0x173e            
            uint8_t _pad173f[0x1]; // 0x173f
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDoubleCastWindow; // 0x1740            
            uint8_t _pad1744[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Nano_Pounce) == 0x1748);
    };
};
