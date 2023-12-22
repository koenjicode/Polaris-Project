#include "MovieSceneAkAudioEventTrack.h"

#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneAkAudioEventTrack::UMovieSceneAkAudioEventTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioEventTrack::CreateTemplateForSection(
	const UMovieSceneSection& InSection) const
{
	return FMovieSceneEvalTemplatePtr();
}


