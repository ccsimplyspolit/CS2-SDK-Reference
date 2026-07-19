#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
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
        // Size: 0x12d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_Hostage : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            source2sdk::client::EntitySpottedState_t m_entitySpottedState; // 0x1208            
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_leader;
            char m_leader[0x4]; // 0x1220            
            uint8_t _pad1224[0x4]; // 0x1224
            source2sdk::client::CountdownTimer m_reuseTimer; // 0x1228            
            Vector m_vel; // 0x1240            
            bool m_isRescued; // 0x124c            
            bool m_jumpedThisFrame; // 0x124d            
            uint8_t _pad124e[0x2]; // 0x124e
            std::int32_t m_nHostageState; // 0x1250            
            bool m_bHandsHaveBeenCut; // 0x1254            
            uint8_t _pad1255[0x3]; // 0x1255
            // m_hHostageGrabber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hHostageGrabber;
            char m_hHostageGrabber[0x4]; // 0x1258            
            source2sdk::entity2::GameTime_t m_fLastGrabTime; // 0x125c            
            VectorWS m_vecGrabbedPos; // 0x1260            
            source2sdk::entity2::GameTime_t m_flRescueStartTime; // 0x126c            
            source2sdk::entity2::GameTime_t m_flGrabSuccessTime; // 0x1270            
            source2sdk::entity2::GameTime_t m_flDropStartTime; // 0x1274            
            source2sdk::entity2::GameTime_t m_flDeadOrRescuedTime; // 0x1278            
            uint8_t _pad127c[0x4]; // 0x127c
            source2sdk::client::CountdownTimer m_blinkTimer; // 0x1280            
            VectorWS m_lookAt; // 0x1298            
            uint8_t _pad12a4[0x4]; // 0x12a4
            source2sdk::client::CountdownTimer m_lookAroundTimer; // 0x12a8            
            bool m_isInit; // 0x12c0            
            source2sdk::modellib::AttachmentHandle_t m_eyeAttachment; // 0x12c1            
            source2sdk::modellib::AttachmentHandle_t m_chestAttachment; // 0x12c2            
            uint8_t _pad12c3[0x5]; // 0x12c3
            source2sdk::client::CBasePlayerController* m_pPredictionOwner; // 0x12c8            
            source2sdk::entity2::GameTime_t m_fNewestAlphaThinkTime; // 0x12d0            
            uint8_t _pad12d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Hostage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Hostage) == 0x12d8);
    };
};
